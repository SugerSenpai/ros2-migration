
cmake_minimum_required(VERSION 3.5)
project(agent_path_prediction)

set(CMAKE_CXX_COMPILER_ARG1 -std=c++14)


## install python modules and global scripts
# catkin_python_setup()

# add message, serviece and action files



# add_action_files( DIRECTORY action
#   FILES
#     Action1.action
# )

# generate added messages and services with any dependencies listed here

# add dynamic reconfigure configs
generate_dynamic_reconfigure_options(cfg/AgentPathPrediction.cfg)

## declare catkin package



## build ##


# declare a c++ executable
add_executable(agent_path_prediction src/agent_path_prediction.cpp)
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(cohan_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(std_srvs REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS}
  ${cohan_msgs_INCLUDE_DIRS} ${tf2_INCLUDE_DIRS}
  ${visualization_msgs_INCLUDE_DIRS} ${rosidl_default_generators_INCLUDE_DIRS}
  ${geometry_msgs_INCLUDE_DIRS} ${nav_msgs_INCLUDE_DIRS} ${std_srvs_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${rclcpp_LIBRARIES}
  ${cohan_msgs_LIBRARIES} ${tf2_LIBRARIES} ${visualization_msgs_LIBRARIES}
  ${rosidl_default_generators_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${nav_msgs_LIBRARIES} ${std_srvs_LIBRARIES})
target_link_libraries(agent_path_prediction ${LIBRARY_DIRS})
set(LIBS ${ament_cmake_LIBRARIES} ${rclcpp_LIBRARIES} ${cohan_msgs_LIBRARIES}
  ${tf2_LIBRARIES} ${visualization_msgs_LIBRARIES}
  ${rosidl_default_generators_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${nav_msgs_LIBRARIES} ${std_srvs_LIBRARIES})
rosidl_generate_interfaces(${PROJECT_NAME} "msg/msg" "msg/FILES"
  "msg/PredictedPoses.msg" "msg/PredictedGoal.msg" "msg/AgentPose.msg" "srv/srv"
  "srv/FILES" "srv/AgentPosePredict.srv" "srv/AgentGoal.srv"
  DEPENDENCIES builtin_interfaces cohan_msgs visualization_msgs geometry_msgs
  nav_msgs std_srvs)

# cmake target dependencies of the c++ executable
add_dependencies(agent_path_prediction ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

# libraries to link the target c++ executable against



## install ##

## executable scripts (python etc.) for installation
# install(PROGRAMS
#   scripts/my_python_script
#   DESTINATION bin
# )

## executables and/or libraries for installation
# install(TARGETS agent_path_prediction agent_path_prediction_node
#   ARCHIVE DESTINATION lib
#   LIBRARY DESTINATION lib
#   RUNTIME DESTINATION bin
# )

## cpp-header files for installation
# install(DIRECTORY include/${PROJECT_NAME}/
#   DESTINATION include/${PROJECT_NAME}
#   FILES_MATCHING PATTERN "*.h"
#   PATTERN ".svn" EXCLUDE
# )

## other files for installation (launch, data, bag files)
# foreach(dir launch data bags)
#    install(DIRECTORY ${dir}/
#       DESTINATION share/${PROJECT_NAME}/${dir})
# endforeach(dir)

## other files for installation
# install(
#   FILES
#     myfile1
#   DESTINATION share/${PROJECT_NAME}
# )



## testing ##

## add catch based cpp test target
# catkin_add_catchtest(${PROJECT_NAME}-test test/test_hanp_prediction.cpp)
# if(TARGET ${PROJECT_NAME}-test)
#   target_link_libraries(${PROJECT_NAME}-test ${PROJECT_NAME})
# endif()

## add nosetest file folders
# catkin_add_nosetests(test)

## add helpers for testing
#include_directories(
#  ${catkin_INCLUDE_DIRS}
#)
#add_executable(prediction_service_caller
#  test/prediction_service_caller.cpp
#)
#add_dependencies(prediction_service_caller
#  ${PROJECT_NAME}_generate_messages_cpp
#)
#target_link_libraries(prediction_service_caller
#  ${catkin_LIBRARIES}
#)

ament_export_dependencies(ament_cmake)
ament_export_dependencies(rclcpp)
ament_export_dependencies(cohan_msgs)
ament_export_dependencies(tf2)
ament_export_dependencies(visualization_msgs)
ament_export_dependencies(rosidl_default_generators)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(nav_msgs)
ament_export_dependencies(std_srvs)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
