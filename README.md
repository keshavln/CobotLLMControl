# LLM Control of the Syncro 5 Cobot

## Overview
This workspace contains the source code of a ROS 2 workspace that allows the Syncro 5 Cobot developed by Addverb to be controlled by an LLM to perform basic tasks in a Gazebo simulation environment. Several modifications were made to Addverb's existing configuration files, and several new ones were created, to allow the cobot to be successfully simulated. This included, amongst other changes: 
- Changes to the joint limit convention used in the URDF
- Adding Gazebo camera plugins
- Replacing Addverb's hardware interfaces with Gazebo-ROS2 standards
- Modifying the state and command interfaces
- MoveIt Servo setup and configuration

**The full documentation of additions can be viewed at the bottom of this readme.**

The python scripts for pick-and-place logic are located in the ```moveit_pytest``` package.

## Demo

The prompt used below was "pick up the red cube to your right".




https://github.com/user-attachments/assets/76adb683-9757-4891-8203-dc60c0068c03




The cobot can currently interact with four objects in the scene:
- blue cube
- red cube
- green cube
- yellow cube

As the cobot operates solely based on a camera attached to the end-effector, the target may not be immediately visible in all cases. Hence, the LLM prompt must also include the approximate direction in which the object is to be searched for. The cobot can be prompted to search forward, backward, left or right.

## Usage

Clone this repository into a brand new workspace folder. \
<br>
  ```git clone https://github.com/keshavln/CobotLLMControl.git``` \
  <br>
Build the ROS 2 workspace. \
<br>
```colcon build --executor sequential``` \
<br>
Source the workspace. \
<br>
```source install/setup.bash``` \
<br>
Execute the launch file. \
<br>
```ros2 launch addverb_cobot_description gazebo.launch.py``` \
<br>
<br>



## Documentation of Codebase Changes

### File Modifications

#### Control Configuration & Launch (`addverb_cobot_control`)

*   **`addverb_cobot_control/config/payload_config.yaml`**
    *   **Change**: `gripper_type` updated from `1.0` to `5.0`.
*   **`addverb_cobot_control/launch/cobot_control.launch.py`**
    *   **Change**: Added timeout parameters to `joint_state_broadcaster` spawner to prevent timeouts during simulation startup.
    *   **Change**: Commented out the original `gripper_controller_spawner`.

#### Robot Description (`addverb_cobot_description`)

*   **`addverb_cobot_description/ros2_control/heal.ros2_control.xacro`**
    *   **Change**: Replaced `addverb_cobot/CobotHWInterface` with `gz_ros2_control/GazeboSimSystem` to connect `ros2_control` to Gazebo instead of real hardware.
*   **`addverb_cobot_description/urdf/heal.urdf.xacro`**
    *   **Gazebo Integration**: Included `cobot_gazebo.xacro` and `newcontrol.xacro`.
    *   **Physics Properties**: Added `inertial` properties to `base_link` (required for simulation). Added Friction (`mu1`, `mu2`) and contact coefficients (`kp`, `kd`) for gripper fingers.
    *   **Joint Limits**: Increased `joint2` upper limit from `0.725` to `0.8757`.
    *   **Gripper Mimicry**: Added "dummy" links and fixed joints (`mimic_dummy_link_*`) to handle Gazebo's behavior with mimic joints, ensuring the gripper moves correctly in simulation.
    *   **Camera Integration**: Added `camera_link`, `camera_optical` link, and a Gazebo camera sensor plugin publishing to `/image_raw`.
    *   **Detachable Joints**: Added `ignition-gazebo-detachable-joint-system` plugins to allow the gripper to grasp objects.

#### MoveIt Configuration (`addverb_moveit_configs`)

*   **`addverb_moveit_configs/syncro_5_moveit_config/config/joint_limits.yaml`**
    *   **Change**: Reset velocity and acceleration scaling factors from `0.1` (safety mode) to `1.0` (full speed) for simulation.
*   **`addverb_moveit_configs/syncro_5_moveit_config/config/moveit_controllers.yaml`**
    *   **Change**: Switched controller from `ptp_joint_controller` to `arm_controller`. Added trajectory execution parameters (tolerances, scaling).
*   **`addverb_moveit_configs/syncro_5_moveit_config/config/robot.ros2_control.xacro`**
    *   **Change**: Switched hardware plugin to `gz_ros2_control/GazeboSimSystem`.
*   **`addverb_moveit_configs/syncro_5_moveit_config/config/robot.srdf`**
    *   **Change**: Disabled collisions between various gripper parts and the arm (e.g., `robotiq_85_base_link` vs knuckles) to prevent self-collision errors in simulation.
    *   **Change**: Updated `end_effector` parent link.
*   **`addverb_moveit_configs/syncro_5_moveit_config/config/robot.urdf.xacro`**
    *   **Change**: Commented out the inclusion of `robot.ros2_control.xacro` to avoid conflicts with the main description's control file.
*   **`addverb_moveit_configs/syncro_5_moveit_config/config/ros2_controllers.yaml`**
    *   **Change**: Redefined controllers.
        *   `arm_controller`: `JointTrajectoryController` for the arm (joints 1-6).
        *   `gripper_controller`: `GripperActionController` for the `finger_joint`.
        *   Added parameters for open-loop control and trajectory integration.

#### Python Test Package (`moveit_pytest`)

*   **`moveit_pytest/package.xml`**
    *   **Change**: Added dependencies for computer vision and AI: `pynput`, `cv2`, `torch`, `groq`, `ultralytics`, `cv_bridge`.
*   **`moveit_pytest/setup.py`**
    *   **Change**: Registered new console scripts (entry points) for nodes like `cobotdetection`, `grippercontrol`, `cobotkeyboard`, etc.
 
---

### New Additions

#### Simulation Configuration & Launch

*   **`addverb_cobot_description/launch/gazebo.launch.py`**:
    *   **Function**: Main launch file for the simulation.
    *   **Details**: Launches Gazebo (`ros_gz_sim`), spawns the robot, starts `ros_gz_bridge` (for connecting Gazebo topics to ROS 2), launches MoveIt servo, and starts custom nodes (`cobotkeyboard`, `detection`).
*   **`addverb_cobot_description/launch/blueworld*.sdf` & `multiple.sdf`**:
    *   **Function**: Gazebo world files (SDF format) containing the environment setup, likely testing different scenarios with cubes/tables.
*   **`addverb_cobot_control/config/sim_config.yaml`**:
    *   **Function**: Configuration for the `ros2_control` controller manager in simulation.

#### URDF/XACRO Extensions

*   **`addverb_cobot_description/ros2_control/newcontrol.xacro`**:
    *   **Function**: Defines the `ros2_control` hardware interface specifically for Gazebo, setting up position command/state interfaces for all arm and gripper joints.
*   **`addverb_cobot_description/urdf/cobot_gazebo.xacro`**:
    *   **Function**: Adds necessary Gazebo plugins (`gz_ros2_control-system`, `ignition-gazebo-sensors-system`) to the robot description.

#### Computer Vision & Testing (`moveit_pytest`)

*   **`moveit_pytest/moveit_pytest/cobotdetection*.py`** (Original, 2, 3):
    *   **Function**: Python nodes for object detection.
    *   **Details**: Uses **YOLO** (via `ultralytics`) to detect objects in the camera feed (`/image_raw`). Integrates with **Groq** API for interpreting user intent (e.g., "detect a blue cube").
*   **`moveit_pytest/moveit_pytest/cobotkeyboard.py`**:
    *   **Function**: Node for teleoperating the robot or triggering actions using keyboard input.
*   **`moveit_pytest/moveit_pytest/grippercontrol.py`**:
    *   **Function**: Node to control the gripper, likely handling the logic for the `DetachableJoint` plugin (attaching/detaching objects).

#### Other
*   **`addverb_moveit_configs/syncro_gripper_moveit_config`**: A new MoveIt configuration package likely specifically tuned for the gripper or a specific simulation setup.

---

### Deleted Files

*   **`addverb_moveit_configs/syncro_gripper`**: Removed in favor of the new `syncro_gripper_moveit_config`.
*   **`control.md`**: Removed (replaced by `README_.md` reference in `Setup.md`).



<br>
<br>
This project may be extended in the future to allow the cobot to generalize to more tasks using MCP tools.
