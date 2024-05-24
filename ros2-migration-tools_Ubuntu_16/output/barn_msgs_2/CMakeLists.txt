cmake_minimum_required(VERSION 3.5)

project(barn_msgs)

set(CMAKE_CXX_FLAGS -std=c++14)


find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclcpp REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${rclpy_INCLUDE_DIRS}
  ${rosidl_default_generators_INCLUDE_DIRS} ${std_msgs_INCLUDE_DIRS}
  ${rclcpp_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${rclpy_LIBRARIES}
  ${rosidl_default_generators_LIBRARIES} ${std_msgs_LIBRARIES} ${rclcpp_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${rclpy_LIBRARIES}
  ${rosidl_default_generators_LIBRARIES} ${std_msgs_LIBRARIES} ${rclcpp_LIBRARIES})
rosidl_generate_interfaces(${PROJECT_NAME} "msg/BARN_data.msg"
  DEPENDENCIES builtin_interfaces std_msgs)




ament_export_dependencies(ament_cmake)
ament_export_dependencies(rclpy)
ament_export_dependencies(rosidl_default_generators)
ament_export_dependencies(std_msgs)
ament_export_dependencies(rclcpp)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
