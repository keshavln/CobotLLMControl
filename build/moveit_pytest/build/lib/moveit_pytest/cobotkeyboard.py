import sys
sys.path.append('/home/keshav/cobot_ros2_ws/src/cobot_ros2')

import numpy
import rclpy
from pynput import keyboard # Changed import
from rclpy.node import Node
from geometry_msgs.msg import TwistStamped
from control_msgs.msg import JointJog
from sensor_msgs.msg import Image
from std_msgs.msg import Empty, String
import cv2
from cv_bridge import CvBridge
import torch
from ultralytics import YOLO
from groq import Groq
import time
from math import pi, sin, cos
from Cobotprocessing.preprocessor import load_system_prompt, extract_object_intent, detect
import numpy as np
from tf2_ros import Buffer, TransformListener
from scipy.spatial.transform import Rotation as R
import message_filters
from tf2_ros import Buffer, TransformListener
from tf2_ros import LookupException, ConnectivityException, ExtrapolationException
from scipy.spatial.transform import Rotation as R

import os
MODEL_PATH = "weights/yoloe-26l-seg.pt"
SAVE_DIR = "images"
SYSTEM_PROMPT_PATH = "/home/keshav/cobot_ros2_ws/src/cobot_ros2/Cobotprocessing/system_prompt.txt"


device = "cuda" if torch.cuda.is_available() else "cpu"
print(f"Using device: {device}")
os.makedirs(SAVE_DIR, exist_ok=True)
system_prompt = load_system_prompt(SYSTEM_PROMPT_PATH)
groq_client = Groq(api_key=os.getenv("GROQ_API_KEY"))

# Load YOLO model
start = time.perf_counter()
model = YOLO(MODEL_PATH).to(device)
end = time.perf_counter()
print(f"Model loading time: {end - start:.2f}s")
class ServoPublisher(Node):
    def __init__(self):
        super().__init__("servopublisher")
        self.pub = self.create_publisher(TwistStamped, '/servo_node/delta_twist_cmds', 10)
        self.pub2 = self.create_publisher(JointJog, '/servo_node/delta_joint_cmds', 10)
        self.imgsub = self.create_subscription(Image, '/image_raw', self.image_callback, 10)
        self.modesub = self.create_subscription(String, '/manual_control', self.set_mode, 10)
        self.attachpub = self.create_publisher(Empty, '/gripper/attach', 10)
        self.detachpub = self.create_publisher(Empty, '/gripper/detach', 10)
        self.outputpub = self.create_publisher(Image, '/processed_image', 10)
        self.mode = 'manual'
        self.attach = False
        self.pressed_keys = set()  # Set to store currently pressed keys
        timerperiod = 0.05
        self.roll = self.pitch = self.yaw = 0.0
        self.timestep = 0.0
        self.start = time.time()
        self.timer = self.create_timer(timerperiod, self.publish_twist)

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)


        #self.timerattach = self.create_timer(0.1, self.publishattach)
        self.bridge = CvBridge()
        #self.target_class = extract_object_intent("detect green", system_prompt)
        self.target_class = 'cube'

        """ self.image_sub = message_filters.Subscriber(self, Image, '/image_raw')
        self.mode_sub = message_filters.Subscriber(self, String, '/manual_control')

        self.ts = message_filters.ApproximateTimeSynchronizer(
            [self.image_sub, self.mode_sub],
            queue_size=10,
            slop=0.1
        )

        self.ts.registerCallback(self.manual_mode) """

        self.listener = keyboard.Listener(
            on_press=self.on_press,
            on_release=self.on_release)
        self.listener.start()
        # --------------------


    def getrpy(self):
        try:
            # WAIT up to 0.1 seconds for the transform to become available.
            # This fixes the "ConnectivityException" caused by network lag.
            t = self.tf_buffer.lookup_transform(
                'base_link',
                'robotiq_85_base_link',
                rclpy.time.Time(),                  # Get latest available
                rclpy.duration.Duration(seconds=0.1) # <--- CRITICAL ADDITION
            )

            quat = [
                t.transform.rotation.x,
                t.transform.rotation.y,
                t.transform.rotation.z,
                t.transform.rotation.w
            ]
            
            rotation = R.from_quat(quat)
            roll, pitch, yaw = rotation.as_euler('xyz', degrees=False)

            if roll > 0:
                roll = pi - roll
            elif roll < 0:
                roll = -pi - roll

            if yaw > 0:
                yaw = pi - yaw
            elif yaw < 0:
                yaw = -pi - yaw
            
            return roll, pitch, yaw

        except (LookupException, ConnectivityException, ExtrapolationException) as e:
            # Log the warning but DO NOT CRASH. 
            # The robot will just try again next frame.
            self.get_logger().warn(f"TF Error: {e}")
            return 0.0, 0.0, 0.0 # Return safe "neutral" values
    
    def set_mode(self, msg):
        if msg.data == 'manual':
            self.mode = 'manual'
        else:
            self.mode = 'auto'

    def publishattach(self):
        if self.attach:
            attach_msg = Empty()
            self.attachpub.publish(attach_msg)
        else:
            detach_msg = Empty()
            self.detachpub.publish(detach_msg)
    # --- pynput callback methods ---
    def on_press(self, key):
        # Add the pressed key to the set
        try:
            self.pressed_keys.add(key.char)
        except AttributeError:
            # For special keys (e.g., space, ctrl)
            self.pressed_keys.add(key)

    def on_release(self, key):
        # Remove the released key from the set
        try:
            self.pressed_keys.remove(key.char)
        except (AttributeError, KeyError):
            # Handle special keys or keys not in set
            if key in self.pressed_keys:
                self.pressed_keys.remove(key)
    # -------------------------------

    def publish_twist(self):

        if self.mode == 'auto':
            return

        self.timestep = time.time()
        twist_msg = TwistStamped()
        twist_msg.header.stamp = self.get_clock().now().to_msg()
        twist_msg.header.frame_id = "base_link"
        current = time.time() - self.start

        factor = 1.0

        # --- Changed checks to use the pressed_keys set ---
        if 'd' in self.pressed_keys:
            twist_msg.twist.linear.x = factor
        elif 'a' in self.pressed_keys:
            twist_msg.twist.linear.x = -factor
        else:
            twist_msg.twist.linear.x = 0.0

        if 's' in self.pressed_keys:
            twist_msg.twist.linear.y = -factor
        elif 'w' in self.pressed_keys:
            twist_msg.twist.linear.y = factor
        else:
            twist_msg.twist.linear.y = 0.0

        if 'e' in self.pressed_keys:
            twist_msg.twist.linear.z = -factor
        elif 'q' in self.pressed_keys:
            twist_msg.twist.linear.z = factor
        else:
            twist_msg.twist.linear.z = 0.0

        if 'f' in self.pressed_keys:
            twist_msg.twist.angular.y = factor
        elif 'h' in self.pressed_keys:
            twist_msg.twist.angular.y = -factor
        else:
            twist_msg.twist.angular.y = 0.0

        if 't' in self.pressed_keys:
            twist_msg.twist.angular.x = factor
        elif 'g' in self.pressed_keys:
            twist_msg.twist.angular.x = -factor
        else:
            twist_msg.twist.angular.x = 0.0

        if 'y' in self.pressed_keys:
            twist_msg.twist.angular.z = factor
        elif 'r' in self.pressed_keys:
            twist_msg.twist.angular.z = -factor
        else:
            twist_msg.twist.angular.z = 0.0
        # -----------------------------------------------

        self.pub.publish(twist_msg)

    def image_callback(self, msg):

        if self.mode == 'auto':
            return

        self.roll, self.pitch, self.yaw = self.getrpy()

        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        hsv = cv2.cvtColor(cv_image, cv2.COLOR_BGR2HSV)
        
        # Define HSV color ranges
        ranges = {
            "blue":   (np.array([100, 150, 0]), np.array([140, 255, 255])),
            "green":  (np.array([40, 70, 70]),  np.array([80, 255, 255])),
            "yellow": (np.array([20, 100, 100]), np.array([30, 255, 255])),
            "red":    (np.array([0, 120, 70]),   np.array([10, 255, 255]))
        }
        
        # Get range or default to blue
        lower, upper = ranges.get(self.target_class, ranges["blue"])
        
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
                #cv2.rectangle(cv_image, (x, y), (x + w, y + h), (0, 255, 0), 2)
                cv2.putText(cv_image, self.target_class, (x, y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.9, (0, 255, 0), 2)
                #cv2.putText(cv_image, f"Roll: {self.roll:.2f}", (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 1.5, (255, 0, 0), 2)
                #cv2.putText(cv_image, f"Pitch: {self.pitch:.2f}", (10, 70), cv2.FONT_HERSHEY_SIMPLEX, 1.5, (255, 0, 0), 2)
                #cv2.putText(cv_image, f"Yaw: {self.yaw:.2f}", (10, 110), cv2.FONT_HERSHEY_SIMPLEX, 1.5, (255, 0, 0), 2)


        """ cv2.namedWindow("output", cv2.WINDOW_NORMAL)
        cv2.resizeWindow("output", 640, 480)
        cv2.imshow("output", cv_image)
        cv2.waitKey(1) """

        out_msg = self.bridge.cv2_to_imgmsg(cv_image, encoding="bgr8")
        self.outputpub.publish(out_msg)

def main():
    rclpy.init()
    servopublisher = ServoPublisher()
    while rclpy.ok():
            rclpy.spin_once(servopublisher, timeout_sec=0.001)
            if cv2.waitKey(1) & 0xFF == ord('x'):
                break
    servopublisher.listener.stop()
    servopublisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()