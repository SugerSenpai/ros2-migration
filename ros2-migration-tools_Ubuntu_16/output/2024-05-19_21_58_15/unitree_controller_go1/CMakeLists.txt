cmake_minimum_required(VERSION 3.5)
project(unitree_controller_go1)

set(ROBOT_TYPE Go1) # The type of robot, support Go1 and A1 currently
set(PLATFORM amd64) # The platform to compile, support amd64 and arm64

set(CATKIN_MAKE ON) # Use CATKIN_MAKE or not, ON or OFF
set(SIMULATION ON) # Use Gazebo or not, ON or OFF
set(REAL_ROBOT OFF) # Link real robot or not, ON or OFF
set(DEBUG OFF) # Use debug functions or not, ON or OFF
set(MOVE_BASE ON) # Need move_base or not, ON or OFF

if(NOT DEFINED ROBOT_TYPE)
  message(FATAL_ERROR "[CMake ERROR] Have not defined ROBOT_TYPE")
endif()
if(NOT DEFINED PLATFORM)
  message(FATAL_ERROR "[CMake ERROR] Have not defined PLATFORM")
endif()

if(${ROBOT_TYPE} STREQUAL "A1")
  add_definitions(-DROBOT_TYPE_A1)
elseif(${ROBOT_TYPE} STREQUAL "Go1")
  add_definitions(-DROBOT_TYPE_Go1)
else()
  message(FATAL_ERROR "[CMake ERROR] The ROBOT_TYPE is error")
endif()

if(SIMULATION)
  and(REAL_ROBOT)
  or(NOT SIMULATION)
  and(NOT REAL_ROBOT)
  message(FATAL_ERROR
    "[CMake ERROR] The SIMULATION and REAL_ROBOT can only be one ON one OFF")
endif()

if(SIMULATION OR MOVE_BASE)
  add_definitions(-DRUN_ROS)
  set(CATKIN_MAKE ON)
endif()

set(CMAKE_CXX_STANDARD 14)

if(CATKIN_MAKE)
  add_definitions(-DCOMPILE_WITH_ROS)
  if(MOVE_BASE)
    add_definitions(-DCOMPILE_WITH_MOVE_BASE)
  endif()
endif()

if(DEBUG)
  add_definitions(-DCOMPILE_DEBUG)
endif()

if(CATKIN_MAKE)
  if(SIMULATION)
    add_definitions(-DCOMPILE_WITH_SIMULATION)
  endif()

endif()


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS} -O3")

if(REAL_ROBOT)
  add_definitions(-DCOMPILE_WITH_REAL_ROBOT)
  if(${ROBOT_TYPE} STREQUAL "A1")
    link_directories(library/unitree_legged_sdk_3.2/lib)
  elseif(${ROBOT_TYPE} STREQUAL "Go1")
    if(${PLATFORM} STREQUAL "amd64")
      link_directories(library/unitree_legged_sdk-3.8.0/lib/cpp/amd64)
    elseif(${PLATFORM} STREQUAL "arm64")
      link_directories(library/unitree_legged_sdk-3.8.0/lib/cpp/arm64)
    endif()
  endif()
endif()

link_directories(${GAZEBO_LIBRARY_DIRS})

# aux_source_directory(src SRC_LIST)
file(GLOB_RECURSE SRC_LIST "src/*/*.cpp" "src/*/*.cc")

add_executable(unitree_controller_go1 src/main.cpp ${SRC_LIST})
find_package(ament_cmake REQUIRED)
find_package(Interpreter REQUIRED)
find_package(NumPy REQUIRED)
find_package(Development REQUIRED)
find_package(std_msgs REQUIRED)
find_package(robot_state_publisher REQUIRED)
find_package(rclcpp REQUIRED)
find_package(genmsg REQUIRED)
find_package(joint_state_controller REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(Boost REQUIRED)
find_package(unitree_legged_msgs REQUIRED)
find_package(controller_manager REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${Interpreter_INCLUDE_DIRS}
  ${NumPy_INCLUDE_DIRS} ${Development_INCLUDE_DIRS} ${std_msgs_INCLUDE_DIRS}
  ${robot_state_publisher_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS}
  ${genmsg_INCLUDE_DIRS} ${joint_state_controller_INCLUDE_DIRS}
  ${gazebo_ros_INCLUDE_DIRS} ${geometry_msgs_INCLUDE_DIRS} ${tf2_INCLUDE_DIRS}
  ${Boost_INCLUDE_DIRS} ${unitree_legged_msgs_INCLUDE_DIRS}
  ${controller_manager_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${Interpreter_LIBRARIES}
  ${NumPy_LIBRARIES} ${Development_LIBRARIES} ${std_msgs_LIBRARIES}
  ${robot_state_publisher_LIBRARIES} ${rclcpp_LIBRARIES} ${genmsg_LIBRARIES}
  ${joint_state_controller_LIBRARIES} ${gazebo_ros_LIBRARIES}
  ${geometry_msgs_LIBRARIES} ${tf2_LIBRARIES} ${Boost_LIBRARIES}
  ${unitree_legged_msgs_LIBRARIES} ${controller_manager_LIBRARIES})
target_link_libraries(unitree_controller_go1 ${LIBRARY_DIRS})
set(LIBS ${ament_cmake_LIBRARIES} ${Interpreter_LIBRARIES} ${NumPy_LIBRARIES}
  ${Development_LIBRARIES} ${std_msgs_LIBRARIES}
  ${robot_state_publisher_LIBRARIES} ${rclcpp_LIBRARIES} ${genmsg_LIBRARIES}
  ${joint_state_controller_LIBRARIES} ${gazebo_ros_LIBRARIES}
  ${geometry_msgs_LIBRARIES} ${tf2_LIBRARIES} ${Boost_LIBRARIES}
  ${unitree_legged_msgs_LIBRARIES} ${controller_manager_LIBRARIES})
if(CATKIN_MAKE)
  add_dependencies(unitree_controller_go1 ${${PROJECT_NAME}_EXPORTED_TARGETS}
    ${catkin_EXPORTED_TARGETS})
endif()
if(DEBUG)
  target_include_directories(unitree_controller_go1
    PRIVATE ${Python2_INCLUDE_DIRS} ${Python2_NumPy_INCLUDE_DIRS})
endif()
if(REAL_ROBOT)
  if(${ROBOT_TYPE} STREQUAL "A1")
    if(${PLATFORM} STREQUAL "amd64")
    elseif(${PLATFORM} STREQUAL "arm64")
    endif()
  elseif(${ROBOT_TYPE} STREQUAL "Go1")
  endif()
endif()

if(NOT CATKIN_MAKE)
  set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
endif()

ament_export_dependencies(ament_cmake)
ament_export_dependencies(Interpreter)
ament_export_dependencies(NumPy)
ament_export_dependencies(Development)
ament_export_dependencies(std_msgs)
ament_export_dependencies(robot_state_publisher)
ament_export_dependencies(rclcpp)
ament_export_dependencies(genmsg)
ament_export_dependencies(joint_state_controller)
ament_export_dependencies(gazebo_ros)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(tf2)
ament_export_dependencies(Boost)
ament_export_dependencies(unitree_legged_msgs)
ament_export_dependencies(controller_manager)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
