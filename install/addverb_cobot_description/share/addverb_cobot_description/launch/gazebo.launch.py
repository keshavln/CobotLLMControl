from launch import LaunchDescription, conditions
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable, IncludeLaunchDescription, ExecuteProcess
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution, Command, EnvironmentVariable
from launch_ros.actions import Node, ComposableNodeContainer
from launch_ros.substitutions import FindPackageShare
from launch_ros.descriptions import ParameterValue, ComposableNode
from ament_index_python.packages import get_package_share_directory, get_package_prefix
from launch.launch_description_sources import PythonLaunchDescriptionSource
from moveit_configs_utils import MoveItConfigsBuilder
from pathlib import Path
import os
import yaml

sdf_name = "multiple"

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
        MoveItConfigsBuilder("syncro_gripper")
        .robot_description(file_path="config/robot.urdf.xacro")
        .robot_description_semantic(file_path='config/robot.srdf')
        .robot_description_kinematics(file_path='config/kinematics.yaml')
        .to_moveit_configs()
    )


    servo_yaml = load_yaml("addverb_cobot_control", "config/cobot_simulated_config.yaml")
    servo_params = {"moveit_servo": servo_yaml}

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
            EnvironmentVariable("GZ_SIM_RESOURCE_PATH", default_value=""),
            os.pathsep,
            str(Path(cobot_description).parent.resolve()),
            os.pathsep,
            str(Path(get_package_share_directory('syncro_gripper_moveit_config')).parent.resolve())
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
                    ("gz_args", [f" -v 1 -r /home/keshav/cobot_ros2_ws/src/cobot_ros2/cobot_ros2/addverb_cobot_description/launch/{sdf_name}.sdf"]
                    #("gz_args", [" -v 4 -r empty.sdf"]
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

    gz_ros2_bridge_old = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        arguments=[
            "/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock",
            "/image_raw@sensor_msgs/msg/Image[gz.msgs.Image",
            "/camera_info@sensor_msgs/msg/CameraInfo[gz.msgs.CameraInfo",
            "/gripper/attach@std_msgs/msg/Empty]ignition.msgs.Empty",
            "/gripper/detach@std_msgs/msg/Empty]ignition.msgs.Empty",
            "/gripper/attach_red@std_msgs/msg/Empty]ignition.msgs.Empty",
            "/gripper/detach_red@std_msgs/msg/Empty]ignition.msgs.Empty",
            "/gripper/status@std_msgs/msg/Bool]ignition.msgs.Boolean",
            "/gripper/status_red@std_msgs/msg/Bool]ignition.msgs.Boolean",
            "/gripper/attach_yellow@std_msgs/msg/Empty]ignition.msgs.Empty",
            "/gripper/detach_yellow@std_msgs/msg/Empty]ignition.msgs.Empty",
            "/gripper/status_yellow@std_msgs/msg/Bool]ignition.msgs.Boolean",
            "/gripper/attach_green@std_msgs/msg/Empty]ignition.msgs.Empty",
            "/gripper/detach_green@std_msgs/msg/Empty]ignition.msgs.Empty",
            "/gripper/status_green@std_msgs/msg/Bool]ignition.msgs.Boolean",
            
        ]
    )

    gz_ros2_bridge = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        name="main_bridge",
        arguments=[
           "/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock",
            "/image_raw@sensor_msgs/msg/Image[gz.msgs.Image",
            "/camera_info@sensor_msgs/msg/CameraInfo[gz.msgs.CameraInfo",
            # Control Topics
            "/gripper/attach@std_msgs/msg/Empty]ignition.msgs.Empty",
           "/gripper/detach@std_msgs/msg/Empty]ignition.msgs.Empty",
            # Status (Boolean): True = Attached, False = Detached
            "/gripper/status@std_msgs/msg/Bool]ignition.msgs.Boolean",
        ]
    )

    gz_ros2_bridge_debug = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        name="debug_bridge",
        arguments=[
            # Bridge the String data
            "/gripper/status@std_msgs/msg/String]ignition.msgs.StringMsg",
        ],
        remappings=[
            # Rename ROS output so it doesn't conflict with the Boolean topic
            ("/gripper/status", "/gripper/object_name"),
        ]
    )
    
    """ controller_manager = Node(
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
    ) """

    ros2_controllers_path = os.path.join(
        get_package_share_directory("syncro_gripper_moveit_config"),
        "config",
        "ros2_controllers.yaml", #changed from ros2_controllers.yaml to this
    )

    controller_manager = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[moveit_config.robot_description, ros2_controllers_path],
        output="screen",
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
        arguments=["gripper_controller", "-c", "/controller_manager", "-t", "position_controllers/GripperActionController"],
    )


    container = ComposableNodeContainer(
        name="moveit_servo_demo_container",
        namespace="/",
        package="rclcpp_components",
        executable="component_container_mt",
        composable_node_descriptions=[
            #ComposableNode(
            #    package="robot_state_publisher",
            #    plugin="robot_state_publisher::RobotStatePublisher",
            #    name="robot_state_publisher",
            #    parameters=[moveit_config.robot_description],
            #),
            ComposableNode(
                package="moveit_servo",
                plugin="moveit_servo::JoyToServoPub",
                name="controller_to_servo_node",
            ),
            ComposableNode(
                package="joy",
                plugin="joy::Joy",
                name="joy_node",
            ),
        ],
        output="screen",
    )
   
    servo_node = Node(
        package="moveit_servo",
        executable="servo_node_main",
        parameters=[
            servo_params,
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
        ],
        output="screen",
    )

    keyboard = Node(
        package = 'moveit_pytest',
        executable = 'cobotkeyboard',
        name = 'cobotkeyboard'
    )

    keyboardmanual = ExecuteProcess(
        cmd=[
            '/home/keshav/cobotenv/bin/python3',
            os.path.join(get_package_prefix('moveit_pytest'), 'lib', 'moveit_pytest', 'cobotkeyboard'),
            '--ros-args',
            '-r', '__node:=cobotkeyboard'
        ],
        output='screen',
        log_cmd=True
    )

    detection = ExecuteProcess(
        cmd=[
            '/home/keshav/cobotenv/bin/python3',
            os.path.join(get_package_prefix('moveit_pytest'), 'lib', 'moveit_pytest', 'cobotdetection3'),
            '--ros-args',
            '-r', '__node:=cobotdetection3'
        ],
        output='screen',
        log_cmd=True
    )


    gripper = Node(
        package='moveit_pytest',
        executable='grippercontrol',
        name='grippercontrol'
    )
    
    viewer = Node(
        package='moveit_pytest',
        executable='viewer',
        name='viewer'
    )


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
        executable="movecobot",
        output="screen",
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
            {"use_sim_time": True}
        ]
    )

    return LaunchDescription([
        gui_arg,
        robot_arg,
        gazebo_resource_path,
        robot_state_publisher,
        gazebo,
        gz_spawn_entity,
        gz_ros2_bridge_old,
        #gz_ros2_bridge_debug,
        #controller_manager,
        joint_state_broadcaster_spawner,
        arm_controller_spawner,
        gripper_controller_spawner,
        servo_node,
        container,
        keyboardmanual,
        detection,
        gripper,
        viewer
        #move_group_node,
        #move_cobot_noded.publish
    ])

