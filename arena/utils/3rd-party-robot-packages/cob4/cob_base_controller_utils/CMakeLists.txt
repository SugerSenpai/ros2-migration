cmake_minimum_required(VERSION 3.5)
project(cob_base_controller_utils)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(std_srvs REQUIRED)
find_package(Threads REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(tf2 REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(urdf REQUIRED)
find_package(std_msgs REQUIRED)

# Include directories
set(INCLUDE_DIRS
  ${ament_cmake_INCLUDE_DIRS}
  ${std_srvs_INCLUDE_DIRS}
  ${CMAKE_THREAD_LIBS_INIT}
  ${rclcpp_INCLUDE_DIRS}
  ${geometry_msgs_INCLUDE_DIRS}
  ${rosidl_default_generators_INCLUDE_DIRS}
  ${tf2_INCLUDE_DIRS}
  ${nav_msgs_INCLUDE_DIRS}
  ${urdf_INCLUDE_DIRS}
  ${std_msgs_INCLUDE_DIRS}
)
include_directories(${INCLUDE_DIRS})

# Add executables
add_executable(cob_stuck_detector src/stuck_detector.cpp)
add_executable(cob_spin_detector src/spin_detector.cpp)

# Link libraries
target_link_libraries(cob_stuck_detector
  ${ament_cmake_LIBRARIES}
  ${std_srvs_LIBRARIES}
  ${CMAKE_THREAD_LIBS_INIT}
  ${rclcpp_LIBRARIES}
  ${geometry_msgs_LIBRARIES}
  ${rosidl_default_generators_LIBRARIES}
  ${tf2_LIBRARIES}
  ${nav_msgs_LIBRARIES}
  ${urdf_LIBRARIES}
  ${std_msgs_LIBRARIES}
)
target_link_libraries(cob_spin_detector
  ${ament_cmake_LIBRARIES}
  ${std_srvs_LIBRARIES}
  ${CMAKE_THREAD_LIBS_INIT}
  ${rclcpp_LIBRARIES}
  ${geometry_msgs_LIBRARIES}
  ${rosidl_default_generators_LIBRARIES}
  ${tf2_LIBRARIES}
  ${nav_msgs_LIBRARIES}
  ${urdf_LIBRARIES}
  ${std_msgs_LIBRARIES}
)

# Generate ROS interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/WheelCommands.msg"
  DEPENDENCIES builtin_interfaces std_srvs geometry_msgs nav_msgs std_msgs
)

# Install targets
install(TARGETS
  cob_stuck_detector
  cob_spin_detector
  DESTINATION lib/${PROJECT_NAME}
)

# Install headers
install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME}
)

# Install scripts
install(PROGRAMS
  scripts/test_publisher_twist_sine.py
  scripts/test_publisher_twist_step.py
  DESTINATION lib/${PROJECT_NAME}/scripts
)

# Install launch files
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

# Export dependencies for ament package
ament_export_dependencies(
  ament_cmake
  std_srvs
  Threads
  rclcpp
  geometry_msgs
  rosidl_default_generators
  tf2
  nav_msgs
  urdf
  std_msgs
)

# Export include directories
ament_export_include_directories(${INCLUDE_DIRS})

# Package configuration
ament_package()
