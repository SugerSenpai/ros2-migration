cmake_minimum_required(VERSION 3.5)
project(cob_base_controller_utils)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()








add_executable(cob_stuck_detector src/stuck_detector.cpp)
add_dependencies(cob_stuck_detector ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

add_executable(cob_spin_detector src/spin_detector.cpp)
find_package(ament_cmake REQUIRED)
find_package(std_srvs REQUIRED)
find_package(thread REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(tf2 REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(urdf REQUIRED)
find_package(std_msgs REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${std_srvs_INCLUDE_DIRS}
  ${thread_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS} ${geometry_msgs_INCLUDE_DIRS}
  ${rosidl_default_generators_INCLUDE_DIRS} ${tf2_INCLUDE_DIRS}
  ${nav_msgs_INCLUDE_DIRS} ${urdf_INCLUDE_DIRS} ${std_msgs_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${std_srvs_LIBRARIES}
  ${thread_LIBRARIES} ${rclcpp_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${rosidl_default_generators_LIBRARIES} ${tf2_LIBRARIES} ${nav_msgs_LIBRARIES}
  ${urdf_LIBRARIES} ${std_msgs_LIBRARIES})
target_link_libraries(cob_stuck_detector ${LIBRARY_DIRS})
target_link_libraries(cob_spin_detector ${LIBRARY_DIRS})
set(LIBS ${ament_cmake_LIBRARIES} ${std_srvs_LIBRARIES} ${thread_LIBRARIES}
  ${rclcpp_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${rosidl_default_generators_LIBRARIES} ${tf2_LIBRARIES} ${nav_msgs_LIBRARIES}
  ${urdf_LIBRARIES} ${std_msgs_LIBRARIES})
rosidl_generate_interfaces(${PROJECT_NAME} "msg/msg" "msg/FILES"
  "msg/WheelCommands.msg"
  DEPENDENCIES builtin_interfaces std_srvs geometry_msgs nav_msgs std_msgs)
add_dependencies(cob_spin_detector ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

### INSTALL ###
install(TARGETS cob_spin_detector cob_stuck_detector
  ARCHIVE
  DESTINATION lib
  LIBRARY
  DESTINATION lib
  RUNTIME
  DESTINATION bin)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME})

catkin_install_python(PROGRAMS scripts/test_publisher_twist_sine.py
  scripts/test_publisher_twist_step.py
  DESTINATION bin)

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})

ament_export_dependencies(ament_cmake)
ament_export_dependencies(std_srvs)
ament_export_dependencies(thread)
ament_export_dependencies(rclcpp)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(rosidl_default_generators)
ament_export_dependencies(tf2)
ament_export_dependencies(nav_msgs)
ament_export_dependencies(urdf)
ament_export_dependencies(std_msgs)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
