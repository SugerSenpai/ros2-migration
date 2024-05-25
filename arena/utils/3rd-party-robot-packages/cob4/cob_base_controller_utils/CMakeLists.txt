cmake_minimum_required(VERSION 3.5)
project(cob_base_controller_utils)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

add_executable(cob_stuck_detector src/stuck_detector.cpp)
add_executable(cob_spin_detector src/spin_detector.cpp)

find_package(ament_cmake REQUIRED)
find_package(std_srvs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(tf2 REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(urdf REQUIRED)
find_package(std_msgs REQUIRED)

ament_export_dependencies(ament_cmake)
ament_export_dependencies(std_srvs)
ament_export_dependencies(rclcpp)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(rosidl_default_generators)
ament_export_dependencies(tf2)
ament_export_dependencies(nav_msgs)
ament_export_dependencies(urdf)
ament_export_dependencies(std_msgs)

ament_export_include_directories(
  ${ament_cmake_INCLUDE_DIRS}
  ${std_srvs_INCLUDE_DIRS}
  ${rclcpp_INCLUDE_DIRS}
  ${geometry_msgs_INCLUDE_DIRS}
  ${rosidl_default_generators_INCLUDE_DIRS}
  ${tf2_INCLUDE_DIRS}
  ${nav_msgs_INCLUDE_DIRS}
  ${urdf_INCLUDE_DIRS}
  ${std_msgs_INCLUDE_DIRS}
)

target_include_directories(cob_stuck_detector PUBLIC ${ament_cmake_INCLUDE_DIRS})
target_include_directories(cob_spin_detector PUBLIC ${ament_cmake_INCLUDE_DIRS})

target_link_libraries(cob_stuck_detector
  ${std_srvs_LIBRARIES}
  ${rclcpp_LIBRARIES}
  ${geometry_msgs_LIBRARIES}
  ${rosidl_default_generators_LIBRARIES}
  ${tf2_LIBRARIES}
  ${nav_msgs_LIBRARIES}
  ${urdf_LIBRARIES}
  ${std_msgs_LIBRARIES}
)

target_link_libraries(cob_spin_detector
  ${std_srvs_LIBRARIES}
  ${rclcpp_LIBRARIES}
  ${geometry_msgs_LIBRARIES}
  ${rosidl_default_generators_LIBRARIES}
  ${tf2_LIBRARIES}
  ${nav_msgs_LIBRARIES}
  ${urdf_LIBRARIES}
  ${std_msgs_LIBRARIES}
)

ament_package()
