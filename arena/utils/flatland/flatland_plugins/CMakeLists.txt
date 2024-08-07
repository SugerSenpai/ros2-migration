cmake_minimum_required(VERSION 3.5)
project(flatland_plugins)

# Ensure we're using c++11
set(CMAKE_CXX_FLAGS -std=c++14)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages

find_package(ament_cmake REQUIRED)
find_package(tf2 REQUIRED)
find_package(std_msgs REQUIRED)
find_package(flatland_msgs REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rostest REQUIRED)
find_package(flatland_server REQUIRED)
find_package(PkgConfig REQUIRED)
find_package(cmake_modules REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(rclcpp REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${tf2_INCLUDE_DIRS}
  ${REQUIRED_INCLUDE_DIRS} ${std_msgs_INCLUDE_DIRS} ${flatland_msgs_INCLUDE_DIRS}
  ${pluginlib_INCLUDE_DIRS} ${rostest_INCLUDE_DIRS}
  ${flatland_server_INCLUDE_DIRS} ${PkgConfig_INCLUDE_DIRS}
  ${cmake_modules_INCLUDE_DIRS} ${Eigen3_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS})
target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_cpp>
  ${CMAKE_CURRENT_SOURCE_DIR}
  ./
)
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${tf2_LIBRARIES} ${REQUIRED_LIBRARIES}
  ${std_msgs_LIBRARIES} ${flatland_msgs_LIBRARIES} ${pluginlib_LIBRARIES}
  ${rostest_LIBRARIES} ${flatland_server_LIBRARIES} ${PkgConfig_LIBRARIES}
  ${cmake_modules_LIBRARIES} ${Eigen3_LIBRARIES} ${rclcpp_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${tf2_LIBRARIES} ${REQUIRED_LIBRARIES}
  ${std_msgs_LIBRARIES} ${flatland_msgs_LIBRARIES} ${pluginlib_LIBRARIES}
  ${rostest_LIBRARIES} ${flatland_server_LIBRARIES} ${PkgConfig_LIBRARIES}
  ${cmake_modules_LIBRARIES} ${Eigen3_LIBRARIES} ${rclcpp_LIBRARIES})

## System dependencies are found with CMake's conventions

# yaml-cpp
pkg_check_modules(YAML_CPP REQUIRED yaml-cpp)
find_path(YAML_CPP_INCLUDE_DIR NAMES yaml_cpp.h PATHS ${YAML_CPP_INCLUDE_DIRS})
find_library(YAML_CPP_LIBRARY NAMES YAML_CPP PATHS ${YAML_CPP_LIBRARY_DIRS})
link_directories(${YAML_CPP_LIBRARY_DIRS})

##############
## coverage ##
##############

set(COVERAGE "OFF" CACHE STRING "Enable coverage generation.")

message(STATUS "Using COVERAGE: ${COVERAGE}")
if("${COVERAGE}" STREQUAL "ON")
  set(CMAKE_CXX_FLAGS
    "${CMAKE_CXX_FLAGS} --coverage -fprofile-arcs -ftest-coverage")
endif()


###################################
## catkin specific configuration ##
###################################


###########
## Build ##
###########


# Declare a C++ library
add_library(flatland_plugins_lib src/laser.cpp src/tricycle_drive.cpp
  src/diff_drive.cpp src/model_tf_publisher.cpp src/update_timer.cpp
  src/bumper.cpp src/tween.cpp src/bool_sensor.cpp src/world_modifier.cpp
  src/world_random_wall.cpp src/gps.cpp)

add_dependencies(flatland_plugins_lib ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

#############
## Install ##
#############

# all install targets should use catkin DESTINATION variables
# See http://ros.org/doc/api/catkin/html/adv_user_guide/variables.html

## Mark executable scripts (Python etc.) for installation
## in contrast to setup.py, you can choose the destination
# install(PROGRAMS
#   scripts/my_python_script
#   DESTINATION bin
# )

# Mark executables and/or libraries for installation
install(TARGETS flatland_plugins_lib
  ARCHIVE
  DESTINATION lib
  LIBRARY
  DESTINATION lib
  RUNTIME
  DESTINATION bin)

# Mark cpp header files for installation
install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME}
  FILES_MATCHING
  PATTERN "*.h")

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME}
  FILES_MATCHING
  PATTERN "*.h")



# Install plugins file
install(FILES flatland_plugins.xml
  DESTINATION share/${PROJECT_NAME})

#############
## Testing ##
#############

## Add gtest based cpp test target and link libraries
# catkin_add_gtest(${PROJECT_NAME}-test test/test_flatland_plugins.cpp)
# if(TARGET ${PROJECT_NAME}-test)
#   target_link_libraries(${PROJECT_NAME}-test ${PROJECT_NAME})
# endif()

## Add folders to be run by python nosetests
# catkin_add_nosetests(test)

if(CATKIN_ENABLE_TESTING)

  add_rostest_gtest(laser_test test/laser_test.test test/laser_test.cpp)

  add_rostest_gtest(tricycle_drive_test test/tricycle_drive_test.test
    test/tricycle_drive_test.cpp)

  add_rostest_gtest(diff_drive_test test/diff_drive_test.test
    test/diff_drive_test.cpp)

  add_rostest_gtest(bumper_test test/bumper_test.test test/bumper_test.cpp)

  add_rostest_gtest(model_tf_publisher_test test/model_tf_publisher_test.test
    test/model_tf_publisher_test.cpp)

  add_rostest_gtest(update_timer_test test/update_timer_test.test
    test/update_timer_test.cpp)

  add_rostest_gtest(tween_test test/tween_test.test test/tween_test.cpp)

  add_rostest_gtest(gps_test test/gps_test.test test/gps_test.cpp)

endif()

ament_export_dependencies(ament_cmake)
ament_export_dependencies(tf2)
ament_export_dependencies(std_msgs)
ament_export_dependencies(flatland_msgs)
ament_export_dependencies(pluginlib)
ament_export_dependencies(rostest)
ament_export_dependencies(flatland_server)
ament_export_dependencies(PkgConfig)
ament_export_dependencies(cmake_modules)
ament_export_dependencies(Eigen3)
ament_export_dependencies(rclcpp)
ament_export_target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_cpp>
  ${CMAKE_CURRENT_SOURCE_DIR}
  ./
)
ament_export_libraries(flatland_plugins_lib ${LIBS})

ament_package()
