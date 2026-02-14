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
from time import time
from math import pi, sin, cos

class ServoPublisher(Node):
    def __init__(self):
        super().__init__("servopublisher")
        self.attachpub = self.create_publisher(Empty, '/gripper/attach', 10)
        self.detachpub = self.create_publisher(Empty, '/gripper/detach', 10)
        self.attachredpub = self.create_publisher(Empty, '/gripper/attach_red', 10)
        self.detachredpub = self.create_publisher(Empty, '/gripper/detach_red', 10)
        self.attachyellowpub = self.create_publisher(Empty, '/gripper/attach_yellow', 10)
        self.detachyellowpub = self.create_publisher(Empty, '/gripper/detach_yellow', 10)
        self.attachgreenpub = self.create_publisher(Empty, '/gripper/attach_green', 10)
        self.detachgreenpub = self.create_publisher(Empty, '/gripper/detach_green', 10)
        self.manualpub = self.create_publisher(String, '/manual_control', 10)
        self.gripper_state_sub = self.create_subscription(String, '/gripper_state', self.set_gripper_mode, 10)
        self.action_client = ActionClient(
            self, 
            GripperCommand, 
            '/gripper_controller/gripper_cmd'
        )
        #for _ in range(50):
        #    self.detachredpub.publish(Empty())

        self.manual = True
        self.attach = False
        self.attach_red = False
        self.attach_yellow = False
        self.attach_green = False
        self.pressed_keys = set()
        self.timer = self.create_timer(0.1, self.check_gripper_and_manual)

        self.listener = keyboard.Listener(
            on_press=self.on_press,
            on_release=self.on_release)
        self.listener.start()
        # --------------------
    def publishattach(self):
        if self.attach:
            self.attachpub.publish(Empty())
        else:
            self.detachpub.publish(Empty())
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

    def send_gripper_goal(self, position, effort=100.0):
        self.action_client.wait_for_server()

        goal_msg = GripperCommand.Goal()
        goal_msg.command.position = position
        goal_msg.command.max_effort = effort

        self.send_goal_future = self.action_client.send_goal_async(goal_msg)

    def set_gripper_mode(self, msg):
        if msg.data=='open':
            if self.attach == True or self.attach_red == True or self.attach_yellow == True or self.attach_green == True:
                self.send_gripper_goal(0.0)
            self.attach = False
            self.attach_red = False
        elif msg.data=='closed_blue':
            if self.attach == False:
                self.send_gripper_goal(0.25)
            self.attach = True
        elif msg.data=='closed_red':
            if self.attach_red == False:
                self.send_gripper_goal(0.25)
            self.attach_red = True
        elif msg.data=='closed_yellow':
            if self.attach_yellow == False:
                self.send_gripper_goal(0.25)
            self.attach_yellow = True
        elif msg.data=='closed_green':
            if self.attach_green == False:
                self.send_gripper_goal(0.25)
            self.attach_green = True

    def check_gripper_and_manual(self):

        """ if msg.data=='open':
            self.attach = False
        elif msg.data=='closed':
            self.attach = True """
        """ if self.manual:
            if 'p' in self.pressed_keys:
                if self.attach:
                    while 'p' in self.pressed_keys:
                        self.attach = False
                else:
                    while 'p' in self.pressed_keys:
                        self.attach = True """

        if 'm' in self.pressed_keys:
            if self.manual:
                while 'm' in self.pressed_keys:
                    self.manual = False
            else:
                while 'm' in self.pressed_keys:
                    self.manual = True
        
        
        if self.attach:
            self.attachpub.publish(Empty())
        else:
            self.detachpub.publish(Empty())

        if self.attach_red:
            self.attachredpub.publish(Empty())
        else:
            self.detachredpub.publish(Empty())

        if self.attach_yellow:
            self.attachyellowpub.publish(Empty())
        else:
            self.detachyellowpub.publish(Empty())

        if self.attach_green:
            self.attachgreenpub.publish(Empty())
        else:
            self.detachgreenpub.publish(Empty())

        if self.manual:
            self.manualpub.publish(String(data="manual"))
        else:
            self.manualpub.publish(String(data="auto"))

def main():
    rclpy.init()
    servopublisher = ServoPublisher()
    rclpy.spin(servopublisher)
    servopublisher.listener.stop()
    servopublisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()



""" t = time()
attach_msg = Empty()
self.detachpub.publish(attach_msg) """
"""while time() - t < 1:
    attach_msg = Empty()    
    self.detachpub.publish(attach_msg) """