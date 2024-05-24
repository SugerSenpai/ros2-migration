cmake_minimum_required(VERSION 3.5)
project(tiago_description)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
find_package(rostest REQUIRED)
find_package(catkin REQUIRED)
find_package(REQUIRED REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${rostest_INCLUDE_DIRS}
  ${catkin_INCLUDE_DIRS} ${REQUIRED_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${rostest_LIBRARIES}
  ${catkin_LIBRARIES} ${REQUIRED_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${rostest_LIBRARIES} ${catkin_LIBRARIES}
  ${REQUIRED_LIBRARIES})

foreach(dir gazebo Media meshes robots urdf config)
  install(DIRECTORY ${dir}/ DESTINATION share/${PROJECT_NAME}/${dir})
endforeach(dir)

#############
## Testing ##
#############

if(CATKIN_ENABLE_TESTING)
  foreach(arm true false)
    # Separated to speed up tests, otherwise it's over 13min
    foreach(end_effector false pal-gripper pal-hey5 schunk-wsg robotiq-2f-85
      robotiq-2f-140 robotiq-epick custom)
      foreach(ft_sensor false schunk-ft)
        add_rostest(test/test_tiago.test
          ARGS arm:=${arm} end_effector:=${end_effector} ft_sensor:=${ft_sensor})
      endforeach(ft_sensor)
    endforeach(end_effector)
    foreach(laser_model false hokuyo sick-551 sick-561 sick-571)
      add_rostest(test/test_tiago.test ARGS arm:=${arm} laser_model:=${laser_model})
    endforeach(laser_model)
    foreach(camera_model false orbbec-astra orbbec-astra-pro asus-xtion)
      add_rostest(test/test_tiago.test ARGS arm:=${arm} camera_model:=${camera_model})
    endforeach(camera_model)
  endforeach(arm)
endif()

ament_export_dependencies(ament_cmake)
ament_export_dependencies(rostest)
ament_export_dependencies(catkin)
ament_export_dependencies(REQUIRED)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
