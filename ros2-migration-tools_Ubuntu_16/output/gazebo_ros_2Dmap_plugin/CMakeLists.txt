cmake_minimum_required(VERSION 3.5)
project(gazebo_ros_2Dmap_plugin)


find_package(ament_cmake REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(kdl_parser REQUIRED)
find_package(REQUIRED REQUIRED)
find_package(joint_state_publisher REQUIRED)
find_package(rclcpp REQUIRED)
find_package(xacro REQUIRED)
find_package(rclpy REQUIRED)
find_package(gazebo_ros_control REQUIRED)
find_package(gazebo_plugins REQUIRED)
find_package(tf2 REQUIRED)
find_package(robot_state_publisher REQUIRED)
find_package(gazebo REQUIRED)
find_package(gazebo_msgs REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${gazebo_ros_INCLUDE_DIRS}
  ${kdl_parser_INCLUDE_DIRS} ${REQUIRED_INCLUDE_DIRS}
  ${joint_state_publisher_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS}
  ${xacro_INCLUDE_DIRS} ${rclpy_INCLUDE_DIRS} ${gazebo_ros_control_INCLUDE_DIRS}
  ${gazebo_plugins_INCLUDE_DIRS} ${tf2_INCLUDE_DIRS}
  ${robot_state_publisher_INCLUDE_DIRS} ${gazebo_INCLUDE_DIRS}
  ${gazebo_msgs_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${gazebo_ros_LIBRARIES}
  ${kdl_parser_LIBRARIES} ${REQUIRED_LIBRARIES} ${joint_state_publisher_LIBRARIES}
  ${rclcpp_LIBRARIES} ${xacro_LIBRARIES} ${rclpy_LIBRARIES}
  ${gazebo_ros_control_LIBRARIES} ${gazebo_plugins_LIBRARIES} ${tf2_LIBRARIES}
  ${robot_state_publisher_LIBRARIES} ${gazebo_LIBRARIES} ${gazebo_msgs_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${gazebo_ros_LIBRARIES}
  ${kdl_parser_LIBRARIES} ${REQUIRED_LIBRARIES} ${joint_state_publisher_LIBRARIES}
  ${rclcpp_LIBRARIES} ${xacro_LIBRARIES} ${rclpy_LIBRARIES}
  ${gazebo_ros_control_LIBRARIES} ${gazebo_plugins_LIBRARIES} ${tf2_LIBRARIES}
  ${robot_state_publisher_LIBRARIES} ${gazebo_LIBRARIES} ${gazebo_msgs_LIBRARIES})
add_definitions(-std=c++14)

link_directories(${GAZEBO_LIBRARY_DIRS})



add_library(gazebo_2Dmap_plugin SHARED src/gazebo_2Dmap_plugin.cpp)

install(TARGETS gazebo_2Dmap_plugin
  LIBRARY
  DESTINATION lib)

ament_export_dependencies(ament_cmake)
ament_export_dependencies(gazebo_ros)
ament_export_dependencies(kdl_parser)
ament_export_dependencies(REQUIRED)
ament_export_dependencies(joint_state_publisher)
ament_export_dependencies(rclcpp)
ament_export_dependencies(xacro)
ament_export_dependencies(rclpy)
ament_export_dependencies(gazebo_ros_control)
ament_export_dependencies(gazebo_plugins)
ament_export_dependencies(tf2)
ament_export_dependencies(robot_state_publisher)
ament_export_dependencies(gazebo)
ament_export_dependencies(gazebo_msgs)
ament_export_include_directories(${INCLUDE_DIRS})
ament_export_libraries(gazebo_2Dmap_plugin ${LIBS})

ament_package()
