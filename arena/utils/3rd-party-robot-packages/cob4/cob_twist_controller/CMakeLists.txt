cmake_minimum_required(VERSION 3.5)
project(cob_twist_controller)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()




add_definitions(${EIGEN_DEFINITIONS})



generate_dynamic_reconfigure_options(cfg/TwistController.cfg)


### BUILD ###

set(SRC_C_DIR "src/constraint_solvers")
set(SRC_CS_DIR "${SRC_C_DIR}/solvers")

## plugin library
add_library(controller_interfaces
  src/controller_interfaces/controller_interface.cpp)
add_dependencies(controller_interfaces ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

## internal libraries
add_library(damping_methods src/damping_methods/damping.cpp)
add_dependencies(damping_methods ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

add_library(inv_calculations
  src/inverse_jacobian_calculations/inverse_jacobian_calculation.cpp)
add_dependencies(inv_calculations ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

add_library(constraint_solvers ${SRC_C_DIR}/constraint_solver_factory.cpp
  ${SRC_CS_DIR}/gradient_projection_method_solver.cpp
  ${SRC_CS_DIR}/stack_of_tasks_solver.cpp ${SRC_CS_DIR}/task_priority_solver.cpp
  ${SRC_CS_DIR}/unconstraint_solver.cpp
  ${SRC_CS_DIR}/unified_joint_limit_singularity_solver.cpp
  ${SRC_CS_DIR}/weighted_least_norm_solver.cpp
  ${SRC_CS_DIR}/wln_joint_limit_avoidance_solver.cpp)
add_dependencies(constraint_solvers ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

add_library(limiters src/limiters/limiter.cpp)
add_dependencies(limiters ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

add_library(kinematic_extensions
  src/kinematic_extensions/kinematic_extension_builder.cpp
  src/kinematic_extensions/kinematic_extension_dof.cpp
  src/kinematic_extensions/kinematic_extension_lookat.cpp
  src/kinematic_extensions/kinematic_extension_urdf.cpp)
add_dependencies(kinematic_extensions ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

add_library(inverse_differential_kinematics_solver
  src/callback_data_mediator.cpp src/inverse_differential_kinematics_solver.cpp)
add_dependencies(inverse_differential_kinematics_solver
  ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

add_library(twist_controller src/${PROJECT_NAME}.cpp)
add_dependencies(twist_controller ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})

add_executable(${PROJECT_NAME}_node src/${PROJECT_NAME}_node.cpp)
add_dependencies(${PROJECT_NAME}_node ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS})


### DEBUG NODES ###
add_executable(debug_trajectory_marker_node
  src/debug/debug_trajectory_marker_node.cpp)
add_dependencies(debug_trajectory_marker_node
  ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

add_executable(debug_fk_vel_recursive_node
  src/debug/debug_fk_vel_recursive_node.cpp)
add_dependencies(debug_fk_vel_recursive_node ${catkin_EXPORTED_TARGETS})

add_executable(test_moving_average_node src/debug/test_moving_average_node.cpp)
add_dependencies(test_moving_average_node ${catkin_EXPORTED_TARGETS})

add_executable(test_simpson_integrator_node
  src/debug/test_simpson_integrator_node.cpp)
add_dependencies(test_simpson_integrator_node ${catkin_EXPORTED_TARGETS})

add_executable(test_trajectory_command_sine_node
  src/debug/test_trajectory_command_sine_node.cpp)
add_dependencies(test_trajectory_command_sine_node ${catkin_EXPORTED_TARGETS})

add_executable(test_forward_command_sine_node
  src/debug/test_forward_command_sine_node.cpp)
add_dependencies(test_forward_command_sine_node ${catkin_EXPORTED_TARGETS})

add_executable(test_twist_command_sine_node
  src/debug/test_twist_command_sine_node.cpp)
find_package(ament_cmake REQUIRED)
find_package(cob_control_msgs REQUIRED)
find_package(thread REQUIRED)
find_package(kdl_parser REQUIRED)
find_package(tf2 REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(pluginlib REQUIRED)
find_package(std_msgs REQUIRED)
find_package(urdf REQUIRED)
find_package(cmake_modules REQUIRED)
find_package(tf_conversions REQUIRED)
find_package(orocos_kdl REQUIRED)
find_package(cob_srvs REQUIRED)
find_package(eigen_conversions REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(roslint REQUIRED)
find_package(kdl_conversions REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(control_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${cob_control_msgs_INCLUDE_DIRS}
  ${thread_INCLUDE_DIRS} ${kdl_parser_INCLUDE_DIRS} ${tf2_INCLUDE_DIRS}
  ${Eigen3_INCLUDE_DIRS} ${pluginlib_INCLUDE_DIRS} ${std_msgs_INCLUDE_DIRS}
  ${urdf_INCLUDE_DIRS} ${cmake_modules_INCLUDE_DIRS}
  ${tf_conversions_INCLUDE_DIRS} ${orocos_kdl_INCLUDE_DIRS}
  ${cob_srvs_INCLUDE_DIRS} ${eigen_conversions_INCLUDE_DIRS}
  ${geometry_msgs_INCLUDE_DIRS} ${rclcpp_INCLUDE_DIRS} ${REQUIRED_INCLUDE_DIRS}
  ${roslint_INCLUDE_DIRS} ${kdl_conversions_INCLUDE_DIRS}
  ${trajectory_msgs_INCLUDE_DIRS} ${visualization_msgs_INCLUDE_DIRS}
  ${control_msgs_INCLUDE_DIRS} ${sensor_msgs_INCLUDE_DIRS}
  ${nav_msgs_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${cob_control_msgs_LIBRARIES}
  ${thread_LIBRARIES} ${kdl_parser_LIBRARIES} ${tf2_LIBRARIES} ${Eigen3_LIBRARIES}
  ${pluginlib_LIBRARIES} ${std_msgs_LIBRARIES} ${urdf_LIBRARIES}
  ${cmake_modules_LIBRARIES} ${tf_conversions_LIBRARIES} ${orocos_kdl_LIBRARIES}
  ${cob_srvs_LIBRARIES} ${eigen_conversions_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${rclcpp_LIBRARIES} ${REQUIRED_LIBRARIES} ${roslint_LIBRARIES}
  ${kdl_conversions_LIBRARIES} ${trajectory_msgs_LIBRARIES}
  ${visualization_msgs_LIBRARIES} ${control_msgs_LIBRARIES}
  ${sensor_msgs_LIBRARIES} ${nav_msgs_LIBRARIES})
target_link_libraries(${PROJECT_NAME}_node ${LIBRARY_DIRS})
target_link_libraries(debug_trajectory_marker_node ${LIBRARY_DIRS})
target_link_libraries(debug_fk_vel_recursive_node ${LIBRARY_DIRS})
target_link_libraries(test_moving_average_node ${LIBRARY_DIRS})
target_link_libraries(test_simpson_integrator_node ${LIBRARY_DIRS})
target_link_libraries(test_trajectory_command_sine_node ${LIBRARY_DIRS})
target_link_libraries(test_forward_command_sine_node ${LIBRARY_DIRS})
target_link_libraries(test_twist_command_sine_node ${LIBRARY_DIRS})
set(LIBS ${ament_cmake_LIBRARIES} ${cob_control_msgs_LIBRARIES}
  ${thread_LIBRARIES} ${kdl_parser_LIBRARIES} ${tf2_LIBRARIES} ${Eigen3_LIBRARIES}
  ${pluginlib_LIBRARIES} ${std_msgs_LIBRARIES} ${urdf_LIBRARIES}
  ${cmake_modules_LIBRARIES} ${tf_conversions_LIBRARIES} ${orocos_kdl_LIBRARIES}
  ${cob_srvs_LIBRARIES} ${eigen_conversions_LIBRARIES} ${geometry_msgs_LIBRARIES}
  ${rclcpp_LIBRARIES} ${REQUIRED_LIBRARIES} ${roslint_LIBRARIES}
  ${kdl_conversions_LIBRARIES} ${trajectory_msgs_LIBRARIES}
  ${visualization_msgs_LIBRARIES} ${control_msgs_LIBRARIES}
  ${sensor_msgs_LIBRARIES} ${nav_msgs_LIBRARIES})
add_dependencies(test_twist_command_sine_node ${catkin_EXPORTED_TARGETS})

roslint_cpp()

### INSTALL ###
install(TARGETS ${PROJECT_NAME}_node constraint_solvers controller_interfaces
  damping_methods inv_calculations inverse_differential_kinematics_solver
  kinematic_extensions limiters twist_controller
  ARCHIVE
  DESTINATION lib
  LIBRARY
  DESTINATION lib
  RUNTIME
  DESTINATION bin)

install(TARGETS debug_fk_vel_recursive_node debug_trajectory_marker_node
  test_moving_average_node test_simpson_integrator_node
  test_trajectory_command_sine_node test_twist_command_sine_node
  ARCHIVE
  DESTINATION lib
  LIBRARY
  DESTINATION lib
  RUNTIME
  DESTINATION bin)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME})

catkin_install_python(PROGRAMS scripts/test_publisher_float_sine_noise.py
  scripts/test_publisher_twist_sine.py scripts/test_publisher_twist.py
  scripts/test_publisher_twist_stamped.py scripts/test_publisher_twist_series.py
  scripts/test_publisher_vel.py
  DESTINATION bin)

catkin_install_python(PROGRAMS scripts/collect_twist_control_eval_data.py
  scripts/evaluate_dbg_jnt_velocity_tests.py
  DESTINATION bin)

catkin_install_python(PROGRAMS scripts/test/test_careobot_base.py
  scripts/test/test_careobot_GPM_jla_ca_torus.py
  scripts/test/test_careobot_st_jla_ca_selfcollision_arm_left_direct_head.py
  scripts/test/test_careobot_st_jla_ca_selfcollision_arm_left_internal_motion.py
  scripts/test/test_careobot_st_jla_ca_sphere.py
  scripts/test/test_careobot_st_jla_ca_torus.py
  DESTINATION bin)

install(FILES controller_interface_plugins.xml
  DESTINATION share/${PROJECT_NAME})

install(DIRECTORY config files launch
  DESTINATION share/${PROJECT_NAME})

ament_export_dependencies(ament_cmake)
ament_export_dependencies(cob_control_msgs)
ament_export_dependencies(thread)
ament_export_dependencies(kdl_parser)
ament_export_dependencies(tf2)
ament_export_dependencies(Eigen3)
ament_export_dependencies(pluginlib)
ament_export_dependencies(std_msgs)
ament_export_dependencies(urdf)
ament_export_dependencies(cmake_modules)
ament_export_dependencies(tf_conversions)
ament_export_dependencies(orocos_kdl)
ament_export_dependencies(cob_srvs)
ament_export_dependencies(eigen_conversions)
ament_export_dependencies(geometry_msgs)
ament_export_dependencies(rclcpp)
ament_export_dependencies(roslint)
ament_export_dependencies(kdl_conversions)
ament_export_dependencies(trajectory_msgs)
ament_export_dependencies(visualization_msgs)
ament_export_dependencies(control_msgs)
ament_export_dependencies(sensor_msgs)
ament_export_dependencies(nav_msgs)
ament_export_include_directories(${INCLUDE_DIRS})
ament_export_libraries(controller_interfaces damping_methods inv_calculations
  constraint_solvers limiters kinematic_extensions
  inverse_differential_kinematics_solver twist_controller ${LIBS})

ament_package()
