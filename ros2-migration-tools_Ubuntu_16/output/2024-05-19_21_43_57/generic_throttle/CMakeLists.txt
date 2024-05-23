cmake_minimum_required(VERSION 3.5)
project(generic_throttle)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES})


catkin_install_python(PROGRAMS scripts/${PROJECT_NAME}_node.py
  DESTINATION bin)

ament_export_dependencies(ament_cmake)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
