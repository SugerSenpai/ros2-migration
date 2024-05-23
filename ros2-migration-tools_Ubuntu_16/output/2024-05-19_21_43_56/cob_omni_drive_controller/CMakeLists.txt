cmake_minimum_required(VERSION 3.5)
project(cob_omni_drive_controller)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
find_package(pluginlib REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(tf2 REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(cob_base_controller_utils REQUIRED)
find_package(angles REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(urdf REQUIRED)
find_package(controller_interface REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(realtime_tools REQUIRED)
find_package(thread REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${pluginlib_INCLUDE_DIRS}
  ${nav_msgs_INCLUDE_DIRS} ${std_srvs_INCLUDE_DIRS} ${tf2_INCLUDE_DIRS}
  ${geometry_msgs_INCLUDE_DIRS} ${cob_base_controller_utils_INCLUDE_DIRS}
  ${angles_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS} ${std_msgs_INCLUDE_DIRS}
  ${urdf_INCLUDE_DIRS} ${controller_interface_INCLUDE_DIRS}
  ${hardware_interface_INCLUDE_DIRS} ${sensor_msgs_INCLUDE_DIRS}
  ${realtime_tools_INCLUDE_DIRS} ${thread_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${pluginlib_LIBRARIES}
  ${nav_msgs_LIBRARIES} ${std_srvs_LIBRARIES} ${tf2_LIBRARIES}
  ${geometry_msgs_LIBRARIES} ${cob_base_controller_utils_LIBRARIES}
  ${angles_LIBRARIES} ${rclcpp_LIBRARIES} ${std_msgs_LIBRARIES} ${urdf_LIBRARIES}
  ${controller_interface_LIBRARIES} ${hardware_interface_LIBRARIES}
  ${sensor_msgs_LIBRARIES} ${realtime_tools_LIBRARIES} ${thread_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${pluginlib_LIBRARIES} ${nav_msgs_LIBRARIES}
  ${std_srvs_LIBRARIES} ${tf2_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${cob_base_controller_utils_LIBRARIES} ${angles_LIBRARIES} ${rclcpp_LIBRARIES}
  ${std_msgs_LIBRARIES} ${urdf_LIBRARIES} ${controller_interface_LIBRARIES}
  ${hardware_interface_LIBRARIES} ${sensor_msgs_LIBRARIES}
  ${realtime_tools_LIBRARIES} ${thread_LIBRARIES})

generate_dynamic_reconfigure_options(cfg/SteerCtrl.cfg)


### BUILD ###

add_library(cob_omni_drive_geom src/UndercarriageCtrlGeom.cpp
  src/param_parser.cpp)
add_dependencies(cob_omni_drive_geom ${catkin_EXPORTED_TARGETS})

add_library(${PROJECT_NAME} src/control_multi_plugin.cpp src/control_plugin.cpp
  src/odom_plugin.cpp)
add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

### INSTALL ###
install(TARGETS ${PROJECT_NAME} cob_omni_drive_geom
  ARCHIVE
  DESTINATION lib
  LIBRARY
  DESTINATION lib
  RUNTIME
  DESTINATION bin)

install(FILES controller_plugins.xml
  DESTINATION share/${PROJECT_NAME})

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME})

ament_export_dependencies(ament_cmake)
ament_export_dependencies(pluginlib)
ament_export_dependencies(nav_msgs)
ament_export_dependencies(std_srvs)
ament_export_dependencies(tf2)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(cob_base_controller_utils)
ament_export_dependencies(angles)
ament_export_dependencies(rclcpp)
ament_export_dependencies(std_msgs)
ament_export_dependencies(urdf)
ament_export_dependencies(controller_interface)
ament_export_dependencies(hardware_interface)
ament_export_dependencies(sensor_msgs)
ament_export_dependencies(realtime_tools)
ament_export_dependencies(thread)
ament_export_include_directories(${INCLUDE_DIRS})
ament_export_libraries(cob_omni_drive_geom ${PROJECT_NAME} ${LIBS})

ament_package()
