cmake_minimum_required(VERSION 3.5)
project(cob_sick_s300)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()





### BUILD ###

add_executable(${PROJECT_NAME} common/src/ScannerSickS300.cpp
  common/src/SerialIO.cpp ros/src/${PROJECT_NAME}.cpp)

add_executable(cob_scan_filter ros/src/cob_scan_filter.cpp)
find_package(ament_cmake REQUIRED)
find_package(date_time REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(thread REQUIRED)
find_package(diagnostic_msgs REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${date_time_INCLUDE_DIRS}
  ${std_msgs_INCLUDE_DIRS} ${sensor_msgs_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS}
  ${thread_INCLUDE_DIRS} ${diagnostic_msgs_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${date_time_LIBRARIES}
  ${std_msgs_LIBRARIES} ${sensor_msgs_LIBRARIES} ${rclcpp_LIBRARIES}
  ${thread_LIBRARIES} ${diagnostic_msgs_LIBRARIES})
target_link_libraries(${PROJECT_NAME} ${LIBRARY_DIRS})
target_link_libraries(cob_scan_filter ${LIBRARY_DIRS})
set(LIBS ${ament_cmake_LIBRARIES} ${date_time_LIBRARIES} ${std_msgs_LIBRARIES}
  ${sensor_msgs_LIBRARIES} ${rclcpp_LIBRARIES} ${thread_LIBRARIES}
  ${diagnostic_msgs_LIBRARIES})

add_dependencies(${PROJECT_NAME} ${catkin_EXPORTED_TARGETS})
add_dependencies(cob_scan_filter ${catkin_EXPORTED_TARGETS})


### INSTALL ###
install(TARGETS cob_scan_filter ${PROJECT_NAME}
  ARCHIVE
  DESTINATION lib
  LIBRARY
  DESTINATION lib
  RUNTIME
  DESTINATION bin)

install(DIRECTORY ros/test DESTINATION share/${PROJECT_NAME})

ament_export_dependencies(ament_cmake)
ament_export_dependencies(date_time)
ament_export_dependencies(std_msgs)
ament_export_dependencies(sensor_msgs)
ament_export_dependencies(rclcpp)
ament_export_dependencies(thread)
ament_export_dependencies(diagnostic_msgs)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
