cmake_minimum_required(VERSION 3.5)
project(ridgeback_control)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
find_package(realtime_tools REQUIRED)
find_package(tf2 REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(controller_interface REQUIRED)
find_package(urdf REQUIRED)
find_package(roslaunch REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${realtime_tools_INCLUDE_DIRS}
  ${tf2_INCLUDE_DIRS} ${nav_msgs_INCLUDE_DIRS}
  ${controller_interface_INCLUDE_DIRS} ${REQUIRED_INCLUDE_DIRS}
  ${urdf_INCLUDE_DIRS} ${roslaunch_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${realtime_tools_LIBRARIES}
  ${tf2_LIBRARIES} ${nav_msgs_LIBRARIES} ${controller_interface_LIBRARIES}
  ${REQUIRED_LIBRARIES} ${urdf_LIBRARIES} ${roslaunch_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${realtime_tools_LIBRARIES} ${tf2_LIBRARIES}
  ${nav_msgs_LIBRARIES} ${controller_interface_LIBRARIES} ${REQUIRED_LIBRARIES}
  ${urdf_LIBRARIES} ${roslaunch_LIBRARIES})
set(mecanum_drive_controller_sources src/mecanum_drive_controller.cpp
  src/odometry.cpp src/speed_limiter.cpp)



add_library(mecanum_drive_controller ${mecanum_drive_controller_headers}
  ${mecanum_drive_controller_sources})

install(TARGETS mecanum_drive_controller
  ARCHIVE
  DESTINATION lib
  LIBRARY
  DESTINATION lib
  RUNTIME
  DESTINATION bin)

install(FILES mecanum_drive_controller_plugins.xml
  DESTINATION share/${PROJECT_NAME})

install(DIRECTORY config launch DESTINATION share/${PROJECT_NAME})

if(CATKIN_ENABLE_TESTING)
  roslaunch_add_file_check(launch/control.launch)
  roslaunch_add_file_check(launch/teleop.launch)
endif()

ament_export_dependencies(ament_cmake)
ament_export_dependencies(realtime_tools)
ament_export_dependencies(tf2)
ament_export_dependencies(nav_msgs)
ament_export_dependencies(controller_interface)
ament_export_dependencies(urdf)
ament_export_dependencies(roslaunch)
ament_export_include_directories(${INCLUDE_DIRS})
ament_export_libraries(mecanum_drive_controller ${LIBS})

ament_package()
