cmake_minimum_required(VERSION 3.5)
project(brics_actuator)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(REQUIRED REQUIRED)
find_package(catkin REQUIRED)
find_package(rosidl_default_generators REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${geometry_msgs_INCLUDE_DIRS}
  ${REQUIRED_INCLUDE_DIRS} ${catkin_INCLUDE_DIRS}
  ${rosidl_default_generators_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${REQUIRED_LIBRARIES} ${catkin_LIBRARIES} ${rosidl_default_generators_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${REQUIRED_LIBRARIES} ${catkin_LIBRARIES} ${rosidl_default_generators_LIBRARIES})
rosidl_generate_interfaces(${PROJECT_NAME} "msg/CartesianPose.msg"
  "msg/CartesianTwist.msg" "msg/CartesianVector.msg" "msg/CartesianWrench.msg"
  "msg/JointAccelerations.msg" "msg/JointConstraint.msg" "msg/JointImpedances.msg"
  "msg/JointPositions.msg" "msg/JointTorques.msg" "msg/JointValue.msg"
  "msg/JointVelocities.msg" "msg/Poison.msg"
  DEPENDENCIES builtin_interfaces geometry_msgs)





ament_export_dependencies(ament_cmake)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(REQUIRED)
ament_export_dependencies(catkin)
ament_export_dependencies(rosidl_default_generators)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
