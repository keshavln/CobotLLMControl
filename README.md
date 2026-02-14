# LLM Control of the Syncro 5 Cobot

This workspace contains the source code of a ROS 2 workspace that allows the Syncro 5 Cobot developed by Addverb to be controlled by an LLM to perform basic tasks in a Gazebo simulation environment. Several modifications were made to Addverb's existing configuration files, and several new ones were created, to allow the cobot to be successfully simulated. This included, amongst other changes: 
- Changes to the joint limit convention used in the URDF
- Adding Gazebo camera plugins
- Replacing Addverb's hardware interfaces with Gazebo-ROS2 standards
- Modifying the state and command interfaces
- MoveIt Servo setup and configuration

The python scripts for pick-and-place logic are located in the ```moveit_pytest``` package.

A demo video can be viewed below. The prompt used was "pick up the red cube to your right".




https://github.com/user-attachments/assets/76adb683-9757-4891-8203-dc60c0068c03




The cobot can currently interact with four objects in the scene:
- blue cube
- red cube
- green cube
- yellow cube

As the cobot operates solely based on a camera attached to the end-effector, the target may not be immediately visible in all cases. Hence, the LLM prompt must also include the approximate direction in which the object is to be searched for. The cobot can be prompted to search forward, backward, left or right.

This project may be extended in the future to allow the cobot to generalize to more tasks using MCP tools.
