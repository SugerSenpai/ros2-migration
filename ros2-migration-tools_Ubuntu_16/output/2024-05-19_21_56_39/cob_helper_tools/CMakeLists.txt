cmake_minimum_required(VERSION 3.5)
project(cob_helper_tools)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()



find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS}
  ${rosidl_default_generators_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${rosidl_default_generators_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${rosidl_default_generators_LIBRARIES})

generate_dynamic_reconfigure_options(cfg/HelperTools.cfg)


#############
## Install ##
#############

catkin_install_python(PROGRAMS scripts/auto_tools.py scripts/auto_init.py
  scripts/auto_recover.py scripts/fake_diagnostics.py scripts/fake_driver.py
  scripts/visualize_navigation_goals.py
  DESTINATION bin)

ament_export_dependencies(ament_cmake)
ament_export_dependencies(rosidl_default_generators)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
