cmake_minimum_required(VERSION 3.5)
project(mecanum_gazebo_plugin)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_ros REQUIRED)
find_package(rclcpp REQUIRED)
find_package(gazebo_dev REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(roslint REQUIRED)

# Include directories
include_directories(
  include
  ${rclcpp_INCLUDE_DIRS}
  ${gazebo_dev_INCLUDE_DIRS}
  ${gazebo_ros_INCLUDE_DIRS}
)

# Add library
add_library(${PROJECT_NAME} SHARED src/mecanum_plugin.cpp)
ament_target_dependencies(${PROJECT_NAME}
  rclcpp
  gazebo_dev
  gazebo_ros
)

# Install
install(TARGETS ${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME}
)

# Linters and tests
roslint_cpp()

ament_package()
