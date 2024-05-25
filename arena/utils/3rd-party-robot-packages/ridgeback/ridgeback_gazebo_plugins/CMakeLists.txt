cmake_minimum_required(VERSION 3.5)
project(ridgeback_gazebo_plugins)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()


## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages

find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(gazebo REQUIRED)
find_package(thread REQUIRED)
find_package(tf2 REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(std_srvs REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${geometry_msgs_INCLUDE_DIRS}
  ${rosidl_default_generators_INCLUDE_DIRS} ${gazebo_INCLUDE_DIRS}
  ${thread_INCLUDE_DIRS} ${tf2_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS}
  ${std_msgs_INCLUDE_DIRS} ${nav_msgs_INCLUDE_DIRS} ${std_srvs_INCLUDE_DIRS}
  ${REQUIRED_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${rosidl_default_generators_LIBRARIES} ${gazebo_LIBRARIES} ${thread_LIBRARIES}
  ${tf2_LIBRARIES} ${rclcpp_LIBRARIES} ${std_msgs_LIBRARIES} ${nav_msgs_LIBRARIES}
  ${std_srvs_LIBRARIES} ${REQUIRED_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${rosidl_default_generators_LIBRARIES} ${gazebo_LIBRARIES} ${thread_LIBRARIES}
  ${tf2_LIBRARIES} ${rclcpp_LIBRARIES} ${std_msgs_LIBRARIES} ${nav_msgs_LIBRARIES}
  ${std_srvs_LIBRARIES} ${REQUIRED_LIBRARIES})
## Find gazebo
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS}")
link_directories(${GAZEBO_LIBRARY_DIRS})

## Find Boost



###########
## Build ##
###########

add_library(ridgeback_ros_force_based_move
  src/ridgeback_ros_force_based_move.cpp)

#############
## Install ##
#############

# all install targets should use catkin DESTINATION variables
# See http://ros.org/doc/api/catkin/html/adv_user_guide/variables.html

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME}
  FILES_MATCHING
  PATTERN "*.h"
  PATTERN ".svn"
  EXCLUDE)

install(TARGETS ridgeback_ros_force_based_move
  ARCHIVE
  DESTINATION lib
  LIBRARY
  DESTINATION lib
  RUNTIME
  DESTINATION bin)

ament_export_dependencies(ament_cmake)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(rosidl_default_generators)
ament_export_dependencies(gazebo)
ament_export_dependencies(thread)
ament_export_dependencies(tf2)
ament_export_dependencies(rclcpp)
ament_export_dependencies(std_msgs)
ament_export_dependencies(nav_msgs)
ament_export_dependencies(std_srvs)
include_directories(${INCLUDE_DIRS})
ament_export_libraries(ridgeback_ros_force_based_move ${LIBS})

ament_package()
