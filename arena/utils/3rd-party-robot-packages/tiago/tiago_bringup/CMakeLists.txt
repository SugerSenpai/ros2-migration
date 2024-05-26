cmake_minimum_required(VERSION 3.8)
project(tiago_bringup)

find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(joy REQUIRED)  # Replacing joy_linux with joy
find_package(joy_teleop REQUIRED)
find_package(launch_pal REQUIRED)
find_package(play_motion2 REQUIRED)
find_package(teleop_tools_msgs REQUIRED)
find_package(tiago_controller_configuration REQUIRED)
find_package(tiago_description REQUIRED)
find_package(twist_mux REQUIRED)
find_package(twist_mux_msgs REQUIRED)

if(pal_module_cmake_FOUND)
  pal_register_modules(
    module/joystick.yaml
    module/play_motion2.yaml
    module/twist_mux.yaml
  )
endif()

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

install(
  PROGRAMS scripts/regen_em_file.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
