cmake_minimum_required(VERSION 3.5)
project(cohan_msgs)

set(CMAKE_CXX_COMPILER_ARG1 -std=c++14)


find_package(ament_cmake REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${visualization_msgs_INCLUDE_DIRS}
  ${tf2_INCLUDE_DIRS} ${geometry_msgs_INCLUDE_DIRS} ${nav_msgs_INCLUDE_DIRS}
  ${rclcpp_INCLUDE_DIRS} ${rosidl_default_generators_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${visualization_msgs_LIBRARIES}
  ${tf2_LIBRARIES} ${geometry_msgs_LIBRARIES} ${nav_msgs_LIBRARIES}
  ${rclcpp_LIBRARIES} ${rosidl_default_generators_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${visualization_msgs_LIBRARIES}
  ${tf2_LIBRARIES} ${geometry_msgs_LIBRARIES} ${nav_msgs_LIBRARIES}
  ${rclcpp_LIBRARIES} ${rosidl_default_generators_LIBRARIES})
rosidl_generate_interfaces(${PROJECT_NAME} "msg/msg" "msg/FILES"
  "msg/AgentPath.msg" "msg/AgentPathArray.msg" "msg/AgentTimeToGoal.msg"
  "msg/AgentTimeToGoalArray.msg" "msg/AgentTrajectory.msg"
  "msg/AgentTrajectoryArray.msg" "msg/AgentType.msg" "msg/TrackedSegment.msg"
  "msg/TrackedAgent.msg" "msg/TrackedAgents.msg" "msg/TrackedSegmentType.msg"
  "msg/Trajectory.msg" "msg/TrajectoryArray.msg" "msg/TrajectoryPoint.msg"
  "msg/TrajectoryPointMsg.msg" "msg/TrajectoryMsg.msg" "msg/StateArray.msg"
  "msg/AgentMarker.msg" "msg/AgentMarkerStamped.msg" "msg/PointArray.msg"
  DEPENDENCIES builtin_interfaces visualization_msgs geometry_msgs nav_msgs)
## add message, service and action files


## generate added messages and services with any dependencies listed here

## declare catkin package

ament_export_dependencies(ament_cmake)
ament_export_dependencies(visualization_msgs)
ament_export_dependencies(tf2)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(nav_msgs)
ament_export_dependencies(rclcpp)
ament_export_dependencies(rosidl_default_generators)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
