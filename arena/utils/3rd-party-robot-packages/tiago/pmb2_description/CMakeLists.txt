cmake_minimum_required(VERSION 3.5)
project(pmb2_description)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
find_package(catkin REQUIRED)
find_package(rostest REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${catkin_INCLUDE_DIRS}
  ${REQUIRED_INCLUDE_DIRS} ${rostest_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${catkin_LIBRARIES}
  ${REQUIRED_LIBRARIES} ${rostest_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${catkin_LIBRARIES} ${REQUIRED_LIBRARIES}
  ${rostest_LIBRARIES})

foreach(dir config gazebo Media meshes robots urdf)
  install(DIRECTORY ${dir}/ DESTINATION share/${PROJECT_NAME}/${dir})
endforeach()

#############
## Testing ##
#############

if(CATKIN_ENABLE_TESTING)
  foreach(laser_model false hokuyo sick-551 sick-561 sick-571)
    foreach(rgbd_sensors false true)
      add_rostest(test/test_pmb2.test
        ARGS laser_model:=${laser_model} rgbd_sensors:=${rgbd_sensors})
    endforeach(rgbd_sensors)
  endforeach(laser_model)
endif()

ament_export_dependencies(ament_cmake)
ament_export_dependencies(catkin)
ament_export_dependencies(rostest)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
