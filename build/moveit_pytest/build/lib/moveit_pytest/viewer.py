import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2

class Viewer(Node):
    def __init__(self):
        super().__init__('viewer_node')
        self.sub = self.create_subscription(Image, '/processed_image', self.cb, 10)
        self.modesub = self.create_subscription(String, '/manual_control', self.set_mode, 10)
        self.mode = "manual"
        self.bridge = CvBridge()

    def set_mode(self, msg):
        if msg.data == "manual":
            self.mode = "manual"
        elif msg.data == "auto":
            self.mode = "auto"
        
    def cb(self, msg):
        frame = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        frame = cv2.rotate(frame, cv2.ROTATE_90_CLOCKWISE)
        cv2.putText(frame, self.mode, (30, 90), cv2.FONT_HERSHEY_SIMPLEX, 3, (255, 0, 0), 8)
        cv2.namedWindow("Unified Output", cv2.WINDOW_NORMAL)
        cv2.resizeWindow("Unified Output", 480, 640)
        cv2.imshow("Unified Output", frame)
        cv2.waitKey(1)

def main():
    rclpy.init()
    viewer = Viewer()
    while rclpy.ok():
            rclpy.spin_once(viewer, timeout_sec=0.001)
            if cv2.waitKey(1) & 0xFF == ord('x'):
                break
    viewer.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()