cmake_minimum_required(VERSION 3.5)
project(mpc_local_planner)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()


# Set to Release in order to speed up the program significantly
set(CMAKE_BUILD_TYPE Release) #None, Debug, Release, RelWithDebInfo, MinSizeRel

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages

# Find control_box_rst
# TODO: Currently, we use QUIET rather than REQUIRED to avoid warnings
#       as some components depend on each other (circularly)
#       which is currently not handled well by the exported cmake config

# Eigen3 FindScript Backward compatibility (ubuntu saucy)
# Since FindEigen.cmake is deprecated starting from jade.
# if (EXISTS "FindEigen3.cmake")


set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(EXTERNAL_INCLUDE_DIRS ${EIGEN3_INCLUDE_DIR})

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
#   std_msgs  # Or other packages containing msgs
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

#add dynamic reconfigure api
#find_package(catkin REQUIRED dynamic_reconfigure)
generate_dynamic_reconfigure_options(cfg/mpc_collision.cfg
  cfg/mpc_controller.cfg cfg/mpc_footprint.cfg)

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
add_library(mpc_local_planner_utils src/utils/publisher.cpp
  src/utils/conversion.cpp src/utils/time_series_se2.cpp)

add_library(mpc_local_planner_optimal_control
  src/optimal_control/full_discretization_grid_base_se2.cpp
  src/optimal_control/finite_differences_grid_se2.cpp
  src/optimal_control/finite_differences_variable_grid_se2.cpp
  src/optimal_control/stage_inequality_se2.cpp
  src/optimal_control/quadratic_cost_se2.cpp
  src/optimal_control/final_state_conditions_se2.cpp
  src/optimal_control/min_time_via_points_cost.cpp)

add_library(mpc_local_planner src/controller.cpp src/mpc_local_planner_ros.cpp)

# Dynamic reconfigure: make sure configure headers are built before any node using them
add_dependencies(mpc_local_planner ${PROJECT_NAME}_gencfg)

## Declare a C++ executable
## With catkin_make all packages are built within a single CMake context
## The recommended prefix ensures that target names across packages don't collide
add_executable(test_mpc_optim_node src/test_mpc_optim_node.cpp)
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(systems REQUIRED)
find_package(mpc_local_planner_msgs REQUIRED)
find_package(pluginlib REQUIRED)
find_package(teb_local_planner REQUIRED)
find_package(mbf_msgs REQUIRED)
find_package(costmap_converter REQUIRED)
find_package(REQUIRED REQUIRED)
find_package(share/control_box_rst REQUIRED)
find_package(tf2_eigen REQUIRED)
find_package(interactive_markers REQUIRED)
find_package(rclcpp REQUIRED)
find_package(base_local_planner REQUIRED)
find_package(optimization REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(QUIET REQUIRED)
find_package(std_msgs REQUIRED)
find_package(control_box_rst REQUIRED)
find_package(core REQUIRED)
find_package(numerics REQUIRED)
find_package(nav_core REQUIRED)
find_package(optimal_control REQUIRED)
find_package(osqp REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(mbf_costmap_core REQUIRED)
find_package(PATH_SUFFIXES REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(${CMAKE_BINARY_DIR} REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(/usr/local REQUIRED)
find_package(communication REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(controllers REQUIRED)
find_package(costmap_2d REQUIRED)
find_package(PATHS REQUIRED)
find_package(tf2 REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${geometry_msgs_INCLUDE_DIRS}
  ${systems_INCLUDE_DIRS} ${mpc_local_planner_msgs_INCLUDE_DIRS}
  ${pluginlib_INCLUDE_DIRS} ${teb_local_planner_INCLUDE_DIRS}
  ${mbf_msgs_INCLUDE_DIRS} ${costmap_converter_INCLUDE_DIRS}
  ${REQUIRED_INCLUDE_DIRS} ${share/control_box_rst_INCLUDE_DIRS}
  ${tf2_eigen_INCLUDE_DIRS} ${interactive_markers_INCLUDE_DIRS}
  ${rclcpp_INCLUDE_DIRS} ${base_local_planner_INCLUDE_DIRS}
  ${optimization_INCLUDE_DIRS} ${visualization_msgs_INCLUDE_DIRS}
  ${QUIET_INCLUDE_DIRS} ${std_msgs_INCLUDE_DIRS} ${control_box_rst_INCLUDE_DIRS}
  ${core_INCLUDE_DIRS} ${numerics_INCLUDE_DIRS} ${nav_core_INCLUDE_DIRS}
  ${optimal_control_INCLUDE_DIRS} ${osqp_INCLUDE_DIRS} ${nav_msgs_INCLUDE_DIRS}
  ${mbf_costmap_core_INCLUDE_DIRS} ${PATH_SUFFIXES_INCLUDE_DIRS}
  ${tf2_geometry_msgs_INCLUDE_DIRS} ${${CMAKE_BINARY_DIR}_INCLUDE_DIRS}
  ${tf2_ros_INCLUDE_DIRS} ${/usr/local_INCLUDE_DIRS} ${communication_INCLUDE_DIRS}
  ${Eigen3_INCLUDE_DIRS} ${controllers_INCLUDE_DIRS} ${costmap_2d_INCLUDE_DIRS}
  ${PATHS_INCLUDE_DIRS} ${tf2_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${systems_LIBRARIES} ${mpc_local_planner_msgs_LIBRARIES} ${pluginlib_LIBRARIES}
  ${teb_local_planner_LIBRARIES} ${mbf_msgs_LIBRARIES}
  ${costmap_converter_LIBRARIES} ${REQUIRED_LIBRARIES}
  ${share/control_box_rst_LIBRARIES} ${tf2_eigen_LIBRARIES}
  ${interactive_markers_LIBRARIES} ${rclcpp_LIBRARIES}
  ${base_local_planner_LIBRARIES} ${optimization_LIBRARIES}
  ${visualization_msgs_LIBRARIES} ${QUIET_LIBRARIES} ${std_msgs_LIBRARIES}
  ${control_box_rst_LIBRARIES} ${core_LIBRARIES} ${numerics_LIBRARIES}
  ${nav_core_LIBRARIES} ${optimal_control_LIBRARIES} ${osqp_LIBRARIES}
  ${nav_msgs_LIBRARIES} ${mbf_costmap_core_LIBRARIES} ${PATH_SUFFIXES_LIBRARIES}
  ${tf2_geometry_msgs_LIBRARIES} ${${CMAKE_BINARY_DIR}_LIBRARIES}
  ${tf2_ros_LIBRARIES} ${/usr/local_LIBRARIES} ${communication_LIBRARIES}
  ${Eigen3_LIBRARIES} ${controllers_LIBRARIES} ${costmap_2d_LIBRARIES}
  ${PATHS_LIBRARIES} ${tf2_LIBRARIES})
target_link_libraries(test_mpc_optim_node ${LIBRARY_DIRS})
set(LIBS ${ament_cmake_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${systems_LIBRARIES} ${mpc_local_planner_msgs_LIBRARIES} ${pluginlib_LIBRARIES}
  ${teb_local_planner_LIBRARIES} ${mbf_msgs_LIBRARIES}
  ${costmap_converter_LIBRARIES} ${REQUIRED_LIBRARIES}
  ${share/control_box_rst_LIBRARIES} ${tf2_eigen_LIBRARIES}
  ${interactive_markers_LIBRARIES} ${rclcpp_LIBRARIES}
  ${base_local_planner_LIBRARIES} ${optimization_LIBRARIES}
  ${visualization_msgs_LIBRARIES} ${QUIET_LIBRARIES} ${std_msgs_LIBRARIES}
  ${control_box_rst_LIBRARIES} ${core_LIBRARIES} ${numerics_LIBRARIES}
  ${nav_core_LIBRARIES} ${optimal_control_LIBRARIES} ${osqp_LIBRARIES}
  ${nav_msgs_LIBRARIES} ${mbf_costmap_core_LIBRARIES} ${PATH_SUFFIXES_LIBRARIES}
  ${tf2_geometry_msgs_LIBRARIES} ${${CMAKE_BINARY_DIR}_LIBRARIES}
  ${tf2_ros_LIBRARIES} ${/usr/local_LIBRARIES} ${communication_LIBRARIES}
  ${Eigen3_LIBRARIES} ${controllers_LIBRARIES} ${costmap_2d_LIBRARIES}
  ${PATHS_LIBRARIES} ${tf2_LIBRARIES})

## Rename C++ executable without prefix
## The above recommended prefix causes long target names, the following renames the
## target back to the shorter version for ease of user use
## e.g. "rosrun someones_pkg node" instead of "rosrun someones_pkg someones_pkg_node"
# set_target_properties(${PROJECT_NAME}_node PROPERTIES OUTPUT_NAME node PREFIX "")

## Add cmake target dependencies of the executable
## same as for the library above
# add_dependencies(${PROJECT_NAME}_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

add_dependencies(mpc_local_planner_utils corbo_core corbo_systems)




#############
## Install ##
#############

# all install targets should use catkin DESTINATION variables
# See http://ros.org/doc/api/catkin/html/adv_user_guide/variables.html

## Mark executable scripts (Python etc.) for installation
## in contrast to setup.py, you can choose the destination
install(PROGRAMS scripts/plot_optimal_control_results.py
  DESTINATION bin)

## Mark executables and/or libraries for installation
install(TARGETS mpc_local_planner mpc_local_planner_utils
  mpc_local_planner_optimal_control
  LIBRARY
  DESTINATION lib)
install(TARGETS test_mpc_optim_node
  RUNTIME
  DESTINATION bin)

## Mark cpp header files for installation
install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME}  #FILES_MATCHING PATTERN "*.h"
  
  PATTERN ".svn"
  EXCLUDE)

## Mark other files for installation (e.g. launch and bag files, etc.)
install(FILES mpc_local_planner_plugin.xml
  DESTINATION share/${PROJECT_NAME})

install(DIRECTORY launch cfg scripts
  DESTINATION share/${PROJECT_NAME}
  PATTERN ".svn"
  EXCLUDE)

#############
## Testing ##
#############

## Add gtest based cpp test target and link libraries
# catkin_add_gtest(${PROJECT_NAME}-test test/test_mpc_local_planner.cpp)
# if(TARGET ${PROJECT_NAME}-test)
#   target_link_libraries(${PROJECT_NAME}-test ${PROJECT_NAME})
# endif()

## Add folders to be run by python nosetests
# catkin_add_nosetests(test)

ament_export_dependencies(ament_cmake)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(systems)
ament_export_dependencies(mpc_local_planner_msgs)
ament_export_dependencies(pluginlib)
ament_export_dependencies(teb_local_planner)
ament_export_dependencies(mbf_msgs)
ament_export_dependencies(costmap_converter)
ament_export_dependencies(REQUIRED)
ament_export_dependencies(share/control_box_rst)
ament_export_dependencies(tf2_eigen)
ament_export_dependencies(interactive_markers)
ament_export_dependencies(rclcpp)
ament_export_dependencies(base_local_planner)
ament_export_dependencies(optimization)
ament_export_dependencies(visualization_msgs)
ament_export_dependencies(QUIET)
ament_export_dependencies(std_msgs)
ament_export_dependencies(control_box_rst)
ament_export_dependencies(core)
ament_export_dependencies(numerics)
ament_export_dependencies(nav_core)
ament_export_dependencies(optimal_control)
ament_export_dependencies(osqp)
ament_export_dependencies(nav_msgs)
ament_export_dependencies(mbf_costmap_core)
ament_export_dependencies(PATH_SUFFIXES)
ament_export_dependencies(tf2_geometry_msgs)
ament_export_dependencies(${CMAKE_BINARY_DIR})
ament_export_dependencies(tf2_ros)
ament_export_dependencies(/usr/local)
ament_export_dependencies(communication)
ament_export_dependencies(Eigen3)
ament_export_dependencies(controllers)
ament_export_dependencies(costmap_2d)
ament_export_dependencies(PATHS)
ament_export_dependencies(tf2)
ament_export_include_directories(${INCLUDE_DIRS})
ament_export_libraries(mpc_local_planner_utils mpc_local_planner_optimal_control
  mpc_local_planner ${LIBS})

ament_package()
