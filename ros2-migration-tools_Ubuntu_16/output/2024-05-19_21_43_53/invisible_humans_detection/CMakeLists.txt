cmake_minimum_required(VERSION 3.5)
project(invisible_humans_detection)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()


## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages

# Eigen3 FindScript Backward compatibility (ubuntu saucy)
# Since FindEigen.cmake is deprecated starting from jade.
if(EXISTS "FindEigen3.cmake")
  set(Eigen_INCLUDE_DIRS ${Eigen3_INCLUDE_DIRS})
elseif(EXISTS "FindEigen.cmake")
elseif(EXISTS "FindEigen.cmake")
  message(WARNING
    "No findEigen cmake script found. You must provde one of them,
  e.g. by adding it to ${PROJECT_SOURCE_DIR}/cmake_modules.")
endif(EXISTS "FindEigen3.cmake")

## System dependencies are found with CMake's conventions
# find_package(Boost REQUIRED COMPONENTS system)


## Uncomment this if the package has a setup.py. This macro ensures
## modules and global scripts declared therein get installed
## See http://ros.org/doc/api/catkin/html/user_guide/setup_dot_py.html
# catkin_python_setup()

################################################
## Declare ROS messages, services and actions ##
################################################

## To declare and build messages, services or actions from within this
## package, follow these steps:
## * Let MSG_DEP_SET be the set of packages whose message types you use in
##   your messages/services/actions (e.g. std_msgs, actionlib_msgs, ...).
## * In the file package.xml:
##   * add a build_depend tag for "message_generation"
##   * add a build_depend and a exec_depend tag for each package in MSG_DEP_SET
##   * If MSG_DEP_SET isn't empty the following dependency has been pulled in
##     but can be declared for certainty nonetheless:
##     * add a exec_depend tag for "message_runtime"
## * In this file (CMakeLists.txt):
##   * add "message_generation" and every package in MSG_DEP_SET to
##     find_package(catkin REQUIRED COMPONENTS ...)
##   * add "message_runtime" and every package in MSG_DEP_SET to
##     catkin_package(CATKIN_DEPENDS ...)
##   * uncomment the add_*_files sections below as needed
##     and list every .msg/.srv/.action file to be processed
##   * uncomment the generate_messages entry below
##   * add every package in MSG_DEP_SET to generate_messages(DEPENDENCIES ...)

## Generate messages in the 'msg' folder
# add_message_files(
#   FILES
#   Message1.msg
#   Message2.msg
# )

## Generate services in the 'srv' folder
# add_service_files(
#   FILES
#   Service1.srv
#   Service2.srv
# )

## Generate actions in the 'action' folder
# add_action_files(
#   FILES
#   Action1.action
#   Action2.action
# )

## Generate added messages and services with any dependencies listed here
# generate_messages(
#   DEPENDENCIES
#   geometry_msgs
# )

################################################
## Declare ROS dynamic reconfigure parameters ##
################################################

## To declare and build dynamic reconfigure parameters within this
## package, follow these steps:
## * In the file package.xml:
##   * add a build_depend and a exec_depend tag for "dynamic_reconfigure"
## * In this file (CMakeLists.txt):
##   * add "dynamic_reconfigure" to
##     find_package(catkin REQUIRED COMPONENTS ...)
##   * uncomment the "generate_dynamic_reconfigure_options" section below
##     and list every .cfg file to be processed

## Generate dynamic reconfigure parameters in the 'cfg' folder
# generate_dynamic_reconfigure_options(
#   cfg/DynReconf1.cfg
#   cfg/DynReconf2.cfg
# )

###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if your package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations

## Declare a C++ library
add_library(${PROJECT_NAME} src/map_scanner.cpp)

add_executable(${PROJECT_NAME}_node src/invisible_humans_detection_node.cpp)
find_package(ament_cmake REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(REQUIRED REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(angles REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(tf2_eigen REQUIRED)
find_package(Eigen REQUIRED)
find_package(rclpy REQUIRED)
find_package(costmap_2d REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${tf2_ros_INCLUDE_DIRS}
  ${REQUIRED_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS} ${geometry_msgs_INCLUDE_DIRS}
  ${tf2_INCLUDE_DIRS} ${angles_INCLUDE_DIRS} ${nav_msgs_INCLUDE_DIRS}
  ${Eigen3_INCLUDE_DIRS} ${tf2_eigen_INCLUDE_DIRS} ${Eigen_INCLUDE_DIRS}
  ${rclpy_INCLUDE_DIRS} ${costmap_2d_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${tf2_ros_LIBRARIES}
  ${REQUIRED_LIBRARIES} ${rclcpp_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${tf2_LIBRARIES} ${angles_LIBRARIES} ${nav_msgs_LIBRARIES} ${Eigen3_LIBRARIES}
  ${tf2_eigen_LIBRARIES} ${Eigen_LIBRARIES} ${rclpy_LIBRARIES}
  ${costmap_2d_LIBRARIES})
target_link_libraries(${PROJECT_NAME}_node ${LIBRARY_DIRS})
set(LIBS ${ament_cmake_LIBRARIES} ${tf2_ros_LIBRARIES} ${REQUIRED_LIBRARIES}
  ${rclcpp_LIBRARIES} ${geometry_msgs_LIBRARIES} ${tf2_LIBRARIES}
  ${angles_LIBRARIES} ${nav_msgs_LIBRARIES} ${Eigen3_LIBRARIES}
  ${tf2_eigen_LIBRARIES} ${Eigen_LIBRARIES} ${rclpy_LIBRARIES}
  ${costmap_2d_LIBRARIES})

# set_target_properties(${PROJECT_NAME}_node PROPERTIES OUTPUT_NAME ${PROJECT_NAME} PREFIX "")

add_dependencies(${PROJECT_NAME}_node ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})


## cpp-header files for installation
# install(DIRECTORY include/${PROJECT_NAME}/
#   DESTINATION include/${PROJECT_NAME}
#   FILES_MATCHING PATTERN "*.h"
#   PATTERN ".svn" EXCLUDE
# )

ament_export_dependencies(ament_cmake)
ament_export_dependencies(tf2_ros)
ament_export_dependencies(REQUIRED)
ament_export_dependencies(rclcpp)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(tf2)
ament_export_dependencies(angles)
ament_export_dependencies(nav_msgs)
ament_export_dependencies(Eigen3)
ament_export_dependencies(tf2_eigen)
ament_export_dependencies(Eigen)
ament_export_dependencies(rclpy)
ament_export_dependencies(costmap_2d)
ament_export_include_directories(${INCLUDE_DIRS})
ament_export_libraries(${PROJECT_NAME} ${LIBS})

ament_package()
