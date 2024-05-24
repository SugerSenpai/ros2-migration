cmake_minimum_required(VERSION 3.5)
project(cob_gazebo_ros_control)

add_definitions(-std=c++14)


find_package(ament_cmake REQUIRED)
find_package(controller_manager REQUIRED)
find_package(gazebo REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(pluginlib REQUIRED)
find_package(urdf REQUIRED)
find_package(joint_limits_interface REQUIRED)
find_package(REQUIRED REQUIRED)
find_package(transmission_interface REQUIRED)
find_package(gazebo_ros_control REQUIRED)
find_package(rclcpp REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${controller_manager_INCLUDE_DIRS}
  ${gazebo_INCLUDE_DIRS} ${gazebo_ros_INCLUDE_DIRS}
  ${hardware_interface_INCLUDE_DIRS} ${pluginlib_INCLUDE_DIRS}
  ${urdf_INCLUDE_DIRS} ${joint_limits_interface_INCLUDE_DIRS}
  ${REQUIRED_INCLUDE_DIRS} ${transmission_interface_INCLUDE_DIRS}
  ${gazebo_ros_control_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${controller_manager_LIBRARIES}
  ${gazebo_LIBRARIES} ${gazebo_ros_LIBRARIES} ${hardware_interface_LIBRARIES}
  ${pluginlib_LIBRARIES} ${urdf_LIBRARIES} ${joint_limits_interface_LIBRARIES}
  ${REQUIRED_LIBRARIES} ${transmission_interface_LIBRARIES}
  ${gazebo_ros_control_LIBRARIES} ${rclcpp_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${controller_manager_LIBRARIES}
  ${gazebo_LIBRARIES} ${gazebo_ros_LIBRARIES} ${hardware_interface_LIBRARIES}
  ${pluginlib_LIBRARIES} ${urdf_LIBRARIES} ${joint_limits_interface_LIBRARIES}
  ${REQUIRED_LIBRARIES} ${transmission_interface_LIBRARIES}
  ${gazebo_ros_control_LIBRARIES} ${rclcpp_LIBRARIES})


### BUILD ###

add_library(hwi_switch_robot_hw_sim src/hwi_switch_robot_hw_sim.cpp)

add_library(hwi_switch_gazebo_ros_control
  src/hwi_switch_gazebo_ros_control_plugin.cpp)

### INSTALL ###
install(TARGETS hwi_switch_gazebo_ros_control hwi_switch_robot_hw_sim
  LIBRARY
  DESTINATION lib)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME})

install(FILES ${PROJECT_NAME}_plugins.xml
  DESTINATION share/${PROJECT_NAME})

ament_export_dependencies(ament_cmake)
ament_export_dependencies(controller_manager)
ament_export_dependencies(gazebo)
ament_export_dependencies(gazebo_ros)
ament_export_dependencies(hardware_interface)
ament_export_dependencies(pluginlib)
ament_export_dependencies(urdf)
ament_export_dependencies(joint_limits_interface)
ament_export_dependencies(REQUIRED)
ament_export_dependencies(transmission_interface)
ament_export_dependencies(gazebo_ros_control)
ament_export_dependencies(rclcpp)
ament_export_include_directories(${INCLUDE_DIRS})
ament_export_libraries(hwi_switch_robot_hw_sim hwi_switch_gazebo_ros_control
  ${LIBS})

ament_package()
