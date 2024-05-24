cmake_minimum_required(VERSION 3.5)
project(path_search)
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(mapping REQUIRED) # -Wextra -Werror

find_package(Eigen3 REQUIRED)
find_package(PCL REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake REQUIRED)

## Compile as C++11, supported in ROS Kinetic and newer
#add_compile_options(-std=c++14)
set(CMAKE_CXX_FLAGS "-std=c++14 ${CMAKE_CXX_FLAGS} -O3 -Wall")

# this is important to find eigen path
set(Eigen3_INCLUDE_DIRS ${EIGEN3_INCLUDE_DIR})

include_directories(
  include
  ${Eigen3_INCLUDE_DIRS}
  ${PCL_INCLUDE_DIRS} 
)

## Declare a C++ library
add_library(path_search
  src/astar.cpp
  src/kinodynamic_astar.cpp
  src/dyn_astar.cpp
)

ament_target_dependencies(path_search
  ${PCL_LIBRARIES}
  "rclcpp"
  "mapping"
)
ament_export_include_directories(include)
ament_export_libraries(path_search)

ament_export_dependencies(geometry_msgs nav_msgs rclcpp rclpy std_msgs mapping)
ament_package()
