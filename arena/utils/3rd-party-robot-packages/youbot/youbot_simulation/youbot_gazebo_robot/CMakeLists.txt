cmake_minimum_required(VERSION 3.5)
project(youbot_gazebo_robot)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()


find_package(ament_cmake REQUIRED)
find_package(roslaunch REQUIRED)
find_package(catkin REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${roslaunch_INCLUDE_DIRS}
  ${REQUIRED_INCLUDE_DIRS} ${catkin_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${roslaunch_LIBRARIES}
  ${REQUIRED_LIBRARIES} ${catkin_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${roslaunch_LIBRARIES} ${REQUIRED_LIBRARIES}
  ${catkin_LIBRARIES})


### TESTS
if(CATKIN_ENABLE_TESTING)

  roslaunch_add_file_check(launch)
endif()

### INSTALLS
install(DIRECTORY launch/ DESTINATION share/${PROJECT_NAME}/launch)

ament_export_dependencies(ament_cmake)
ament_export_dependencies(roslaunch)
ament_export_dependencies(catkin)
include_directories(${INCLUDE_DIRS})

ament_package()
