import sys
sys.path.append('/home/keshav/cobot_ros2_ws/src/cobot_ros2')
import os
import rclpy
from pynput import keyboard # Changed import
from rclpy.node import Node
from rclpy.action import ActionClient
from geometry_msgs.msg import TwistStamped
from control_msgs.msg import JointJog
from control_msgs.action import GripperCommand
from sensor_msgs.msg import Image
from std_msgs.msg import Empty, String
import cv2
from cv_bridge import CvBridge
import torch
from ultralytics import YOLO
from groq import Groq
import time
from Cobotprocessing.preprocessor import load_system_prompt, extract_object_intent, detect
import numpy as np
from tf2_ros import Buffer, TransformListener
from tf2_ros import LookupException, ConnectivityException, ExtrapolationException
from scipy.spatial.transform import Rotation as R
from math import pi
import tkinter as tk
from tkinter import simpledialog, messagebox

SYSTEM_PROMPT_PATH = "/home/keshav/cobot_ros2_ws/src/cobot_ros2/Cobotprocessing/system_prompt2.txt"

system_prompt = load_system_prompt(SYSTEM_PROMPT_PATH)
groq_client = Groq(api_key=os.getenv("GROQ_API_KEY"))

class ServoPublisher(Node):
    def __init__(self, color, direction):
        super().__init__("servopublisher")

        self.imgsub = self.create_subscription(Image, '/image_raw', self.image_callback, 10)
        self.modesub = self.create_subscription(String, '/manual_control', self.set_mode, 10)
        self.movepub = self.create_publisher(TwistStamped, '/servo_node/delta_twist_cmds', 10)
        self.outputpub = self.create_publisher(Image, '/processed_image', 10)
        self.gripper_state_pub = self.create_publisher(String, '/gripper_state', 10)

        self.action_client = ActionClient(
            self, 
            GripperCommand, 
            '/gripper_controller/gripper_cmd'
        )

        self.bridge = CvBridge()
        self.target_class = color  # Options: "blue", "green", "yellow", "red"
        self.direction = direction
        self.mode = "manual"
        self.error_x = self.error_y = 300
        self.approach_buffer = 0
        self.rotation = None
        self.gripper_state = "open"
        self.stage = 0
        self.fully_detected_x = False
        self.fully_detected_y = False

        self.roll = 0.0
        self.pitch = 0.0
        self.yaw = 0.0

        self.calib_time = 0.0
        self.ascent_time = 0.0

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

    def send_gripper_goal(self, position, effort=100.0):
        self.action_client.wait_for_server()

        goal_msg = GripperCommand.Goal()
        goal_msg.command.position = position
        goal_msg.command.max_effort = effort

        self.send_goal_future = self.action_client.send_goal_async(goal_msg)

    def set_mode(self, msg):
        if msg.data == 'auto':
            self.mode = 'auto'
        else:
            self.mode = 'manual'

    def getrpy(self):
        t = self.tf_buffer.lookup_transform(
            'base_link',
            'robotiq_85_base_link',
            rclpy.time.Time())

        quat = [
            t.transform.rotation.x,
            t.transform.rotation.y,
            t.transform.rotation.z,
            t.transform.rotation.w
        ]

        self.rotation = R.from_quat(quat)
        roll, pitch, yaw = self.rotation.as_euler('xyz', degrees=False)

        if roll > 0:
            roll = pi - roll
        elif roll < 0:
            roll = -pi - roll

        if yaw > 0:
            yaw = pi - yaw
        elif yaw < 0:
            yaw = -pi - yaw


        return roll, pitch, yaw

    def is_fully_detected(self, x, y, w, h):
        #2304 1296
        margin = 200
        if x < margin or x+w > 2304-margin:
            self.fully_detected_x = False
        else:
            self.fully_detected_x = True

        if y < margin or y+h > 1296-margin:
            self.fully_detected_y = False
        else:
            self.fully_detected_y = True

    def search(self):
        msg = TwistStamped()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = "base_link"
        factor = 1.0
        roll, pitch, yaw = self.getrpy()
        if self.direction == 'right' and not self.fully_detected_y:
            msg.twist.angular.y = -factor
        elif self.direction == 'left' and not self.fully_detected_y:
            msg.twist.angular.y = factor
        elif self.direction == 'forward' and not self.fully_detected_x:
            msg.twist.angular.x = factor
        elif self.direction == 'back' and not self.fully_detected_x:
            msg.twist.angular.x = -factor
        else:
            self.stage = 1

        if abs(roll) > pi/3.5 or abs(pitch) > pi/3.5:
            root = tk.Tk()
            root.withdraw()
            messagebox.showinfo("Error", "Search failed :(")
            root.destroy()
            self.stage = 3

        self.movepub.publish(msg)


    def follow(self, x, y, w, h):
        # Implement logic to move robot towards the detected object
        if self.error_x < 2 and self.error_y < 2:
            self.approach(x,y,w,h)
            return
            self.approach_buffer += 1


        if self.stage == 2:
            return
        
        self.approach_buffer = 0
        msg = TwistStamped()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = "base_link"

        factor = 1.0
        center_x = x + w/2
        center_y = y + h/2
        frame_center_x = 2304/2
        frame_center_y = 1296/2

        self.error_x = abs(center_x - frame_center_x)
        self.error_y = abs(center_y - frame_center_y)

        factor_x = min(1.0, self.error_x / 100)
        factor_y = min(1.0, self.error_y / 100)
        factor_z = 0.0

        self.roll, self.pitch, self.yaw = self.getrpy()

        local_vector = [factor_x, factor_y, factor_z]
        global_vector = self.rotation.apply(local_vector)
        global_vector = [min(1.0, max(v, -1.0)) for v in global_vector]

        if center_x < frame_center_x:
            msg.twist.linear.y = -global_vector[0]
        elif center_x > frame_center_x:
            msg.twist.linear.y = global_vector[0]
        if center_y < frame_center_y:
            msg.twist.linear.x = global_vector[1]
        elif center_y > frame_center_y:
            msg.twist.linear.x = -global_vector[1]


        msg.twist.angular.x = -min(1.0, max(self.roll*10, -1.0))
        msg.twist.angular.y = min(1.0, max(self.pitch*10, -1.0))
        msg.twist.angular.z = min(1.0, max(self.yaw*10, -1.0))

        self.movepub.publish(msg)


    def approach(self,x,y,w,h):
        msg = TwistStamped()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = "robotiq_85_base_link"
        factor_z = 1.0
        descent_time = time.time()

        if self.stage == 2:
            if time.time() - self.calib_time < 0.75:
                msg.twist.linear.z = 0.0
                msg.twist.linear.y = 1.0
                msg.twist.linear.x = -0.2
                self.movepub.publish(msg)
                self.ascent_time = time.time()
            else:
                self.gripper_state = f"closed_{self.target_class}"
                if time.time() - self.ascent_time < 4:
                    msg.twist.linear.z = -factor_z
                    msg.twist.linear.y = 0.0
                    self.movepub.publish(msg)
                else:
                    self.gripper_state = "open"
                    self.stage = 3
            return
        if self.stage == 1:
            if w*h < 1690000:
                msg.twist.linear.z = factor_z
                self.movepub.publish(msg)
            else:
                self.calib_time = time.time()
                self.stage = 2
            

    def image_callback(self, msg):

        if self.mode == 'manual':
            self.stage = 0
            self.error_x = self.error_y = 300
            return
        
        gripper_msg = String()
        gripper_msg.data = self.gripper_state

        self.gripper_state_pub.publish(gripper_msg)
        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        hsv = cv2.cvtColor(cv_image, cv2.COLOR_BGR2HSV)
        ranges = {
            "blue":   (np.array([100, 150, 0]), np.array([140, 255, 255])),
            "green":  (np.array([40, 70, 70]),  np.array([80, 255, 255])),
            "yellow": (np.array([20, 100, 100]), np.array([30, 255, 255])),
            "red":    (np.array([0, 120, 70]),   np.array([10, 255, 255]))
        }

        lower, upper = ranges.get(self.target_class, ranges["red"])
        
        if self.target_class == "red":
            # Red wraps around 180, so we need two masks
            mask1 = cv2.inRange(hsv, np.array([0, 120, 70]), np.array([10, 255, 255]))
            mask2 = cv2.inRange(hsv, np.array([170, 120, 70]), np.array([180, 255, 255]))
            mask = mask1 + mask2
        else:
            mask = cv2.inRange(hsv, lower, upper)
            
        contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        
        if contours:
            # Find largest contour
            largest_contour = max(contours, key=cv2.contourArea)
            if cv2.contourArea(largest_contour) > 500: # Filter small noise
                x, y, w, h = cv2.boundingRect(largest_contour)
                cv2.rectangle(cv_image, (x, y), (x + w, y + h), (0, 255, 0), 2)
                cv2.putText(cv_image, self.target_class, (x, y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.9, (0, 255, 0), 2)
                #cv2.putText(cv_image, f"Roll: {self.roll:.2f}", (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 1.5, (255, 0, 0), 2)
                #cv2.putText(cv_image, f"Pitch: {self.pitch:.2f}", (10, 70), cv2.FONT_HERSHEY_SIMPLEX, 1.5, (255, 0, 0), 2)
                #cv2.putText(cv_image, f"Yaw: {self.yaw:.2f}", (10, 110), cv2.FONT_HERSHEY_SIMPLEX, 1.5, (255, 0, 0), 2)
                self.is_fully_detected(x,y,w,h)
                if self.stage == 0:
                    self.search()
                else:
                    self.follow(x,y,w,h)
        else:
            self.fully_detected_x = False
            self.fully_detected_y = False
            if self.stage == 0:
                self.search()

        out_msg = self.bridge.cv2_to_imgmsg(cv_image, encoding="bgr8")
        self.outputpub.publish(out_msg)

def get_color_input():
    root = tk.Tk()
    root.withdraw()
    color = simpledialog.askstring("Input color", "Enter target color:")
    root.destroy()
    return color


def main():
    rclpy.init()
    
    root = tk.Tk()
    root.withdraw()
    prompt = simpledialog.askstring("Input", "What would you like to do?")
    root.destroy()
    result = extract_object_intent(prompt, system_prompt)
    result = eval(result)  
    servopublisher = ServoPublisher(result[0], result[1])
    while rclpy.ok():
        rclpy.spin_once(servopublisher, timeout_sec=0.001)
            
    servopublisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()