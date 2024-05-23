cmake_minimum_required(VERSION 3.5)
project(cohan_layers)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

set_directory_properties(PROPERTIES COMPILE_OPTIONS "-Wall;-Werror")

add_compile_options(-std=c++11)


find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(roslint REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(angles REQUIRED)
find_package(rclpy REQUIRED)
find_package(cohan_msgs REQUIRED)
find_package(pluginlib REQUIRED)
find_package(costmap_2d REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS}
  ${roslint_INCLUDE_DIRS} ${geometry_msgs_INCLUDE_DIRS} ${angles_INCLUDE_DIRS}
  ${rclpy_INCLUDE_DIRS} ${cohan_msgs_INCLUDE_DIRS} ${pluginlib_INCLUDE_DIRS}
  ${costmap_2d_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${rclcpp_LIBRARIES}
  ${roslint_LIBRARIES} ${geometry_msgs_LIBRARIES} ${angles_LIBRARIES}
  ${rclpy_LIBRARIES} ${cohan_msgs_LIBRARIES} ${pluginlib_LIBRARIES}
  ${costmap_2d_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${rclcpp_LIBRARIES} ${roslint_LIBRARIES}
  ${geometry_msgs_LIBRARIES} ${angles_LIBRARIES} ${rclpy_LIBRARIES}
  ${cohan_msgs_LIBRARIES} ${pluginlib_LIBRARIES} ${costmap_2d_LIBRARIES})
generate_dynamic_reconfigure_options(cfg/AgentLayer.cfg cfg/AgentVLayer.cfg)



add_library(cohan_layers src/agent_layer.cpp src/static_agent_layer.cpp
  src/agent_visibility_layer.cpp)


add_dependencies(cohan_layers ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

if(CATKIN_ENABLE_TESTING)
  roslint_cpp()
  roslint_add_test()
endif()

install(FILES costmap_plugins.xml
  DESTINATION share/${PROJECT_NAME})


install(TARGETS cohan_layers
  LIBRARY
  DESTINATION lib
  ARCHIVE
  DESTINATION lib
  RUNTIME
  DESTINATION bin)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME})

ament_export_dependencies(ament_cmake)
ament_export_dependencies(rclcpp)
ament_export_dependencies(roslint)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(angles)
ament_export_dependencies(rclpy)
ament_export_dependencies(cohan_msgs)
ament_export_dependencies(pluginlib)
ament_export_dependencies(costmap_2d)
ament_export_include_directories(${INCLUDE_DIRS})
ament_export_libraries(cohan_layers ${LIBS})

ament_package()
