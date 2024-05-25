cmake_minimum_required(VERSION 3.5)
project(youbot_gazebo_worlds)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
find_package(catkin REQUIRED)
find_package(roslaunch REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${catkin_INCLUDE_DIRS}
  ${roslaunch_INCLUDE_DIRS} ${REQUIRED_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${catkin_LIBRARIES}
  ${roslaunch_LIBRARIES} ${REQUIRED_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${catkin_LIBRARIES} ${roslaunch_LIBRARIES}
  ${REQUIRED_LIBRARIES})


### TESTS
if(CATKIN_ENABLE_TESTING)

  roslaunch_add_file_check(launch)
endif()


### INSTALLS
install(DIRECTORY launch/ DESTINATION share/${PROJECT_NAME}/launch)
install(DIRECTORY urdf/ DESTINATION share/${PROJECT_NAME}/urdf)

ament_export_dependencies(ament_cmake)
ament_export_dependencies(catkin)
ament_export_dependencies(roslaunch)
include_directories(${INCLUDE_DIRS})

ament_package()
