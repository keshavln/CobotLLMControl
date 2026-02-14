from launch import LaunchDescription, conditions
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution, Command, EnvironmentVariable
from launch_ros.actions import Node, ComposableNodeContainer
from launch_ros.substitutions import FindPackageShare
from launch_ros.descriptions import ParameterValue, ComposableNode
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource
from moveit_configs_utils import MoveItConfigsBuilder
from pathlib import Path
import os
import yaml


def load_yaml(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, "r") as file:
            return yaml.safe_load(file)
    except EnvironmentError:
        return None


def generate_launch_description():

    cobot_description = get_package_share_directory('addverb_cobot_description')

    #moveit_config = MoveItConfigsBuilder("robot", robot_description='config/robot.urdf.xacro', package_name="syncro_5_moveit_config").robot_description_semantic(file_path = 'config/robot.srdf').to_moveit_configs()

    """ moveit_config = (
        MoveItConfigsBuilder(robot_name = "robot", package_name = "syncro_5_moveit_config")
        .robot_description(file_path="config/robot.urdf.xacro")
        .to_moveit_configs()
    ) """

    moveit_config = (
        MoveItConfigsBuilder("syncro_5")
        .robot_description(file_path="config/robot.urdf.xacro")
        .robot_description_semantic(file_path='config/robot.srdf')
        .robot_description_kinematics(file_path='config/kinematics.yaml')
        .to_moveit_configs()
    )


    servo_yaml = load_yaml("addverb_cobot_control", "config/cobot_simulated_config.yaml")
    servo_params = {"moveit_servo": servo_yaml}

    
    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[
            moveit_config.to_dict(),
            {"use_sim_time": True},
            {"publish_robot_description_semantic": True} 
        ],
    )

    move_cobot_node = Node(
        package="addverbmove",
        executable="movecobotanywhere",
        output="screen",
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
            {"use_sim_time": True}
        ]
    )

    return LaunchDescription([
        move_group_node,
        move_cobot_node
    ])

