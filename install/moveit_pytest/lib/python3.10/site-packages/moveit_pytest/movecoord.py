import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose

class MoveCoord(Node):
    def __init__(self):
        super().__init__("movecoord")
        self.pub = self.create_publisher(Pose, "/cobot/target_pose", 10)

    def publish(self, coords):
        msg = Pose()
        msg.position.x = coords[0]
        msg.position.y = coords[1]
        msg.position.z = coords[2]

        msg.orientation.w = 1.0
        msg.orientation.x = 0.0
        msg.orientation.y = 0.0
        msg.orientation.z = 0.0

        self.pub.publish(msg)
        self.get_logger().info("Successfully published motherfucker")

def main():
    rclpy.init()
    movecoord = MoveCoord()
    while rclpy.ok():
        rclpy.spin_once(movecoord, timeout_sec=0.001)
        coords = eval(input("Enter target fucking coordinates as a list:"))
        movecoord.publish(coords)
    movecoord.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()