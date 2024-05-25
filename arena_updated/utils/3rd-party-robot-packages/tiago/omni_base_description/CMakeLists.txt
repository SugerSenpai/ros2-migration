cmake_minimum_required(VERSION 3.5)
project(omni_base_description)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
find_package(REQUIRED REQUIRED)
find_package(rostest REQUIRED)
find_package(catkin REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${REQUIRED_INCLUDE_DIRS}
  ${rostest_INCLUDE_DIRS} ${catkin_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${REQUIRED_LIBRARIES}
  ${rostest_LIBRARIES} ${catkin_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${REQUIRED_LIBRARIES} ${rostest_LIBRARIES}
  ${catkin_LIBRARIES})

foreach(dir gazebo meshes robots urdf config)
  install(DIRECTORY ${dir}/ DESTINATION share/${PROJECT_NAME}/${dir})
endforeach(dir)

#############
## Testing ##
#############

if(CATKIN_ENABLE_TESTING)
  add_rostest(test/test_omni_base.test)
endif()

ament_export_dependencies(ament_cmake)
ament_export_dependencies(REQUIRED)
ament_export_dependencies(rostest)
ament_export_dependencies(catkin)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
