cmake_minimum_required(VERSION 3.5)
project(arena_evaluation_msgs)

find_package(rosidl_default_generators REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
set(CMAKE_CXX_STANDARD 1 4)

rosidl_generate_interfaces(
    ${PROJECT_NAME}
        srv/ChangeDirectory.srv
    DEPENDENCIES
)

include_directories()
ament_package()
