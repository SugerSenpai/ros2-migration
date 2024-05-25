cmake_minimum_required(VERSION 3.5)
project(unitree_legged_control)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(unitree_legged_msgs REQUIRED)
find_package(controller_interface REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rclcpp REQUIRED)
find_package(realtime_tools REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${hardware_interface_INCLUDE_DIRS}
  ${unitree_legged_msgs_INCLUDE_DIRS} ${controller_interface_INCLUDE_DIRS}
  ${pluginlib_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS} ${realtime_tools_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${hardware_interface_LIBRARIES}
  ${unitree_legged_msgs_LIBRARIES} ${controller_interface_LIBRARIES}
  ${pluginlib_LIBRARIES} ${rclcpp_LIBRARIES} ${realtime_tools_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${hardware_interface_LIBRARIES}
  ${unitree_legged_msgs_LIBRARIES} ${controller_interface_LIBRARIES}
  ${pluginlib_LIBRARIES} ${rclcpp_LIBRARIES} ${realtime_tools_LIBRARIES})


link_directories(${catkin_LIB_DIRS} lib)

add_library(unitree_legged_control src/joint_controller.cpp)
add_dependencies(${PROJECT_NAME} unitree_legged_msgs_gencpp)

ament_export_dependencies(ament_cmake)
ament_export_dependencies(hardware_interface)
ament_export_dependencies(unitree_legged_msgs)
ament_export_dependencies(controller_interface)
ament_export_dependencies(pluginlib)
ament_export_dependencies(rclcpp)
ament_export_dependencies(realtime_tools)
include_directories(${INCLUDE_DIRS})
ament_export_libraries(unitree_legged_control ${LIBS})

ament_package()
