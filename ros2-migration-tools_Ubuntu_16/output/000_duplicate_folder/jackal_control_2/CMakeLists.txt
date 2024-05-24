cmake_minimum_required(VERSION 3.5)
project(jackal_control)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
find_package(roslaunch REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${roslaunch_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${roslaunch_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${roslaunch_LIBRARIES})

roslaunch_add_file_check(launch/control.launch)
roslaunch_add_file_check(launch/teleop.launch)

install(DIRECTORY config launch DESTINATION share/${PROJECT_NAME})

ament_export_dependencies(ament_cmake)
ament_export_dependencies(roslaunch)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
