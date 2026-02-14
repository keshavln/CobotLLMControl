cmake_minimum_required(VERSION 3.8)
project(addverbmove)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_srvs REQUIRED)
find_package(geometry_msgs REQUIRED)

#find_package(addverb_cobot_description REQUIRED)
#find_package(addverb_cobot_msgs REQUIRED)
#find_package(syncro_5_moveit_config REQUIRED)
#find_package(addverb_cobot_control REQUIRED)
#find_package(moveit_pytest REQUIRED)

add_executable(movecobot src/movecobot.cpp)
add_executable(movecobotanywhere src/movecobotanywhere.cpp)
ament_target_dependencies(movecobot rclcpp moveit_ros_planning_interface std_srvs geometry_msgs)
ament_target_dependencies(movecobotanywhere rclcpp moveit_ros_planning_interface std_srvs geometry_msgs)

install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

install(TARGETS
movecobot
movecobotanywhere
DESTINATION lib/${PROJECT_NAME}
)



if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  #ament_lint_auto_find_test_dependencies()
endif()

ament_package()
