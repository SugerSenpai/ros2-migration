cmake_minimum_required(VERSION 3.5)
project(youbot_gazebo_control)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
find_package(roslint REQUIRED)
find_package(control_toolbox REQUIRED)
find_package(angles REQUIRED)
find_package(controller_interface REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(roslaunch REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(kdl_parser REQUIRED)
find_package(pluginlib REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(urdf REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tf2 REQUIRED)
find_package(realtime_tools REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${roslint_INCLUDE_DIRS}
  ${control_toolbox_INCLUDE_DIRS} ${angles_INCLUDE_DIRS}
  ${controller_interface_INCLUDE_DIRS} ${geometry_msgs_INCLUDE_DIRS}
  ${roslaunch_INCLUDE_DIRS} ${hardware_interface_INCLUDE_DIRS}
  ${kdl_parser_INCLUDE_DIRS} ${pluginlib_INCLUDE_DIRS} ${nav_msgs_INCLUDE_DIRS}
  ${urdf_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS} ${REQUIRED_INCLUDE_DIRS}
  ${tf2_INCLUDE_DIRS} ${realtime_tools_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${roslint_LIBRARIES}
  ${control_toolbox_LIBRARIES} ${angles_LIBRARIES}
  ${controller_interface_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${roslaunch_LIBRARIES} ${hardware_interface_LIBRARIES} ${kdl_parser_LIBRARIES}
  ${pluginlib_LIBRARIES} ${nav_msgs_LIBRARIES} ${urdf_LIBRARIES}
  ${rclcpp_LIBRARIES} ${REQUIRED_LIBRARIES} ${tf2_LIBRARIES}
  ${realtime_tools_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${roslint_LIBRARIES}
  ${control_toolbox_LIBRARIES} ${angles_LIBRARIES}
  ${controller_interface_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${roslaunch_LIBRARIES} ${hardware_interface_LIBRARIES} ${kdl_parser_LIBRARIES}
  ${pluginlib_LIBRARIES} ${nav_msgs_LIBRARIES} ${urdf_LIBRARIES}
  ${rclcpp_LIBRARIES} ${REQUIRED_LIBRARIES} ${tf2_LIBRARIES}
  ${realtime_tools_LIBRARIES})


### LIBS
add_library(steered_wheel_base_controller src/steered_wheel_base_controller.cpp)

### TESTS
roslint_cpp()

if(CATKIN_ENABLE_TESTING)

  roslaunch_add_file_check(launch)
endif()


### INSTALLS
install(TARGETS steered_wheel_base_controller
  LIBRARY
  DESTINATION lib)

install(DIRECTORY config/ DESTINATION share/${PROJECT_NAME}/config)
install(DIRECTORY launch/ DESTINATION share/${PROJECT_NAME}/launch)
install(FILES youbot_gazebo_control_plugins.xml
  DESTINATION share/${PROJECT_NAME})

ament_export_dependencies(ament_cmake)
ament_export_dependencies(roslint)
ament_export_dependencies(control_toolbox)
ament_export_dependencies(angles)
ament_export_dependencies(controller_interface)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(roslaunch)
ament_export_dependencies(hardware_interface)
ament_export_dependencies(kdl_parser)
ament_export_dependencies(pluginlib)
ament_export_dependencies(nav_msgs)
ament_export_dependencies(urdf)
ament_export_dependencies(rclcpp)
ament_export_dependencies(tf2)
ament_export_dependencies(realtime_tools)
include_directories(${INCLUDE_DIRS})
ament_export_libraries(steered_wheel_base_controller ${LIBS})

ament_package()
