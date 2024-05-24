cmake_minimum_required(VERSION 3.5)
project(cob_scan_unifier)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()




###########
## Build ##
###########


add_executable(scan_unifier_node src/scan_unifier_node.cpp)
find_package(ament_cmake REQUIRED)
find_package(laser_geometry REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(rclcpp REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${laser_geometry_INCLUDE_DIRS}
  ${sensor_msgs_INCLUDE_DIRS} ${tf2_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${laser_geometry_LIBRARIES}
  ${sensor_msgs_LIBRARIES} ${tf2_LIBRARIES} ${rclcpp_LIBRARIES})
target_link_libraries(scan_unifier_node ${LIBRARY_DIRS})
set(LIBS ${ament_cmake_LIBRARIES} ${laser_geometry_LIBRARIES}
  ${sensor_msgs_LIBRARIES} ${tf2_LIBRARIES} ${rclcpp_LIBRARIES})
add_dependencies(scan_unifier_node ${catkin_EXPORTED_TARGETS})

#############
## Install ##
#############

install(TARGETS scan_unifier_node
  ARCHIVE
  DESTINATION lib
  LIBRARY
  DESTINATION lib
  RUNTIME
  DESTINATION bin)


ament_export_dependencies(ament_cmake)
ament_export_dependencies(laser_geometry)
ament_export_dependencies(sensor_msgs)
ament_export_dependencies(tf2)
ament_export_dependencies(rclcpp)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
