from launch import LaunchDescription, conditions
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution, Command
from launch_ros.actions import Node 
from launch_ros.substitutions import FindPackageShare
from launch_ros.descriptions import ParameterValue
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource
from pathlib import Path
import os


def generate_launch_description():

    cobot_description = get_package_share_directory('addverb_cobot_description')

    robot_description = ParameterValue(
        Command( 
            [
                "xacro ",
                os.path.join(get_package_share_directory('addverb_cobot_description'), 'urdf', 'heal.urdf.xacro')
            ]
        ),
        value_type=str
    )

    gui_arg = DeclareLaunchArgument(
        name= 'gui',
        default_value= 'true'
    )

    robot_arg = DeclareLaunchArgument(
        name= 'robot_name',
        default_value= 'heal'
    )

    urdf = PathJoinSubstitution(
        [
            FindPackageShare("addverb_cobot_description"),
            "urdf",
            'heal.urdf.xacro',
        ]
    )

    gazebo_resource_path = SetEnvironmentVariable(
        name = "GZ_SIM_RESOURCE_PATH",
        value = [
            str(Path(cobot_description).parent.resolve())
        ]
    )

    ros_distro = os.environ["ROS_DISTRO"]

    is_ignition = True if ros_distro == "humble" else "False"
    
    # robot state publisher for joint state publisher gui
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        #name = 'robot_state_pubslisher_gui',
        output = 'screen',
        parameters=[{'robot_description': ParameterValue(Command(['xacro ', urdf]),
                                                                    value_type=str), 'use_sim_time':True}],
        #condition= conditions.IfCondition(LaunchConfiguration('gui')),
    )
    
    gazebo = IncludeLaunchDescription(
                PythonLaunchDescriptionSource([os.path.join(
                    get_package_share_directory("ros_gz_sim"), "launch"), "/gz_sim.launch.py"]),
                launch_arguments=[
                    ("gz_args", [" -v 4 -r empty.sdf"]#/home/keshav/arws/src/botdesc/launch/modifiedempty.sdf"]
                    )
                ]
             )
    
    gz_spawn_entity = Node(
        package="ros_gz_sim",
        executable="create",
        output="screen",
        arguments=["-topic", "robot_description",
                   "-name", "cobot"], #---THIS IS THE NAME, EXERCISE CAUTION---
    )

    gz_ros2_bridge = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        arguments=[
            "/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock",
        ]
    )
    
    controller_manager = Node(
        package='controller_manager',
        executable='ros2_control_node',
        parameters=[
            {"robot_description": robot_description},
            os.path.join(
                get_package_share_directory('addverb_cobot_control'),
                "config",
                "sim_config.yaml"
            )
        ]
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager-timeout",
            "300",
            "--controller-manager",
            "/controller_manager",
            ],
    )

    arm_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["arm_controller", "-c", "/controller_manager", "-t", "joint_trajectory_controller/JointTrajectoryController"],
    )

    gripper_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["gripper_controller", "-c", "/controller_manager", "-t", "joint_trajectory_controller/JointTrajectoryController"],
    )

    return LaunchDescription([
        gui_arg,
        robot_arg,
        gazebo_resource_path,
        robot_state_publisher,
        gazebo,
        gz_spawn_entity,
        gz_ros2_bridge,
        controller_manager,
        joint_state_broadcaster_spawner,
        arm_controller_spawner,
        gripper_controller_spawner
    ])

