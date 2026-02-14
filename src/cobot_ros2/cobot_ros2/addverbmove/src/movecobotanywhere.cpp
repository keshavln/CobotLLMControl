#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <thread>

#include <geometry_msgs/msg/pose.hpp> // Include Pose message
#include <moveit/move_group_interface/move_group_interface.h>

// Global pointer for the interface
std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_interface;

// TOPIC CALLBACK: Runs every time a message arrives
void target_pose_callback(const geometry_msgs::msg::Pose::SharedPtr msg)
{
  RCLCPP_INFO(rclcpp::get_logger("movecobotanywhere"), "Received new target: [x: %.2f, y: %.2f, z: %.2f]", 
              msg->position.x, msg->position.y, msg->position.z);

  // 1. Set the target from the message
  move_group_interface->setPoseTarget(*msg);
  
  // Optional: Set speed (can be dynamic too, but hardcoded for now)
  move_group_interface->setMaxVelocityScalingFactor(1.0);
  move_group_interface->setMaxAccelerationScalingFactor(1.0);

///auto current_pose = move_group_interface->getCurrentPose();
///RCLCPP_INFO(rclcpp::get_logger("movecobotanywhere"), "Current Pose: x=%f, y=%f, z=%f", 
///            current_pose.pose.position.x, 
//            current_pose.pose.position.y, 
//            current_pose.pose.position.z);

  // 2. Plan
  moveit::planning_interface::MoveGroupInterface::Plan plan_msg;
  bool success = static_cast<bool>(move_group_interface->plan(plan_msg));

  // 3. Execute
  if(success) {
    move_group_interface->execute(plan_msg);
    RCLCPP_INFO(rclcpp::get_logger("movecobotanywhere"), "Move Complete!");
    auto current_pose = move_group_interface->getCurrentPose();
    RCLCPP_INFO(rclcpp::get_logger("movecobotanywhere"), "Current Pose: x=%f, y=%f, z=%f", 
            current_pose.pose.position.x, 
            current_pose.pose.position.y, 
            current_pose.pose.position.z);

  } else {
    RCLCPP_ERROR(rclcpp::get_logger("movecobotanywhere"), "Planning failed! Is the target reachable?");
  }
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  
  auto const node = std::make_shared<rclcpp::Node>(
    "movecobotanywhere",
    rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true)
  );

  // Initialize MoveGroup (Must be done after node init)
  move_group_interface = std::make_shared<moveit::planning_interface::MoveGroupInterface>(node, "syncro_5");

  move_group_interface->startStateMonitor(); 

  // 2. Wait up to 5 seconds for the first valid position to arrive
  //    If we don't do this, the first "getCurrentPose" will fail.
  bool state_received = move_group_interface->getCurrentState(5.0) != nullptr;
  
  if (state_received) {
      RCLCPP_INFO(node->get_logger(), "Robot State received! Ready to plan.");
  } else {
      RCLCPP_WARN(node->get_logger(), "Timed out waiting for robot state. Check if /joint_states is publishing!");
  }


  // Create the Subscriber
  // Topic: "/cobot/target_pose"
  // Queue Size: 10
  auto subscription = node->create_subscription<geometry_msgs::msg::Pose>(
    "/cobot/target_pose", 10, target_pose_callback
  );

  RCLCPP_INFO(node->get_logger(), "MoveCobotAnywhere Ready. Waiting for Pose messages on /cobot/target_pose ...");

  // Spin with MultiThreadedExecutor to allow MoveIt to run alongside the callback
  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(node);
  executor.spin();

  rclcpp::shutdown();
  return 0;
}