cmake_minimum_required(VERSION 3.5)
project(cob_srvs)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS}
  ${rosidl_default_generators_INCLUDE_DIRS} ${geometry_msgs_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${rosidl_default_generators_LIBRARIES}
  ${geometry_msgs_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${rosidl_default_generators_LIBRARIES}
  ${geometry_msgs_LIBRARIES})
rosidl_generate_interfaces(${PROJECT_NAME} "srv/Dock.srv" "srv/SetFloat.srv"
  "srv/SetInt.srv" "srv/SetString.srv"
  DEPENDENCIES builtin_interfaces geometry_msgs)



ament_export_dependencies(ament_cmake)
ament_export_dependencies(rosidl_default_generators)
ament_export_dependencies(geometry_msgs)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
