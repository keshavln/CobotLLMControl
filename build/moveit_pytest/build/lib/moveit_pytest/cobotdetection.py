import sys
sys.path.append('/home/keshav/cobot_ros2_ws/src/cobot_ros2')

import numpy
import rclpy
from pynput import keyboard # Changed import
from rclpy.node import Node
from geometry_msgs.msg import TwistStamped
from control_msgs.msg import JointJog
from sensor_msgs.msg import Image
from std_msgs.msg import Empty
import cv2
from cv_bridge import CvBridge
import torch
from ultralytics import YOLO
from groq import Groq
import time
from math import pi, sin, cos
from Cobotprocessing.preprocessor import load_system_prompt, extract_object_intent, detect

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
        self.imgsub = self.create_subscription(Image, '/image_raw', self.image_callback, 10)
        timerperiod = 0.05
        self.start = time.time()
        self.bridge = CvBridge()
        self.target_class = extract_object_intent("detect a blue cube", system_prompt)
        # --- pynput setup ---
        # Set to store currently pressed keys
        # Start the listener thread
        # --------------------
    def image_callback(self, msg):
        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        final_coords, detected = detect(model, self.target_class, cv_image)
        if detected:
            x1, y1, x2, y2 = map(int, final_coords)
            cv2.rectangle(cv_image, (x1, y1), (x2, y2), (0, 255, 0), 2)
            cv2.putText(cv_image, self.target_class, (x1, y1 - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.9, (0, 255, 0), 2)
            #follow()

        cv2.namedWindow("output", cv2.WINDOW_NORMAL)
        cv2.resizeWindow("output", 640, 480)
        cv2.imshow("output", cv_image)
        #cv2.waitKey(1)

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