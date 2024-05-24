cmake_minimum_required(VERSION 3.5)
project(rviz_path_array)

# Add support for C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()


add_compile_options(-std=c++11)

find_package(ament_cmake REQUIRED)
find_package(rviz REQUIRED)
find_package(QtCore REQUIRED)
find_package(Qt4 REQUIRED)
find_package(EXACT REQUIRED)
find_package(Core REQUIRED)
find_package(Qt5 REQUIRED)
find_package(REQUIRED REQUIRED)
find_package(QtGui REQUIRED)
find_package(cohan_msgs REQUIRED)
find_package(Widgets REQUIRED)
find_package(${rviz_QT_VERSION} REQUIRED)
set(INCLUDE_DIRS ${ament_cmake_INCLUDE_DIRS} ${rviz_INCLUDE_DIRS}
  ${QtCore_INCLUDE_DIRS} ${Qt4_INCLUDE_DIRS} ${EXACT_INCLUDE_DIRS}
  ${Core_INCLUDE_DIRS} ${Qt5_INCLUDE_DIRS} ${REQUIRED_INCLUDE_DIRS}
  ${QtGui_INCLUDE_DIRS} ${cohan_msgs_INCLUDE_DIRS} ${Widgets_INCLUDE_DIRS}
  ${${rviz_QT_VERSION}_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})
set(LIBRARY_DIRS ${ament_cmake_LIBRARIES} ${rviz_LIBRARIES} ${QtCore_LIBRARIES}
  ${Qt4_LIBRARIES} ${EXACT_LIBRARIES} ${Core_LIBRARIES} ${Qt5_LIBRARIES}
  ${REQUIRED_LIBRARIES} ${QtGui_LIBRARIES} ${cohan_msgs_LIBRARIES}
  ${Widgets_LIBRARIES} ${${rviz_QT_VERSION}_LIBRARIES})
set(LIBS ${ament_cmake_LIBRARIES} ${rviz_LIBRARIES} ${QtCore_LIBRARIES}
  ${Qt4_LIBRARIES} ${EXACT_LIBRARIES} ${Core_LIBRARIES} ${Qt5_LIBRARIES}
  ${REQUIRED_LIBRARIES} ${QtGui_LIBRARIES} ${cohan_msgs_LIBRARIES}
  ${Widgets_LIBRARIES} ${${rviz_QT_VERSION}_LIBRARIES})
link_directories(${catkin_LIBRARY_DIRS})

## This setting causes Qt's "MOC" generation to happen automatically.
set(CMAKE_AUTOMOC ON)

## This plugin includes Qt widgets, so we must include Qt.
## We'll use the version that rviz used so they are compatible.
if(rviz_QT_VERSION VERSION_LESS "5")
  message(STATUS "Using Qt4 based on the rviz_QT_VERSION: ${rviz_QT_VERSION}")
  ## pull in all required include dirs, define QT_LIBRARIES, etc.
  include(${QT_USE_FILE})
else()
  message(STATUS "Using Qt5 based on the rviz_QT_VERSION: ${rviz_QT_VERSION}")
  ## make target_link_libraries(${QT_LIBRARIES}) pull in all required dependencies
  set(QT_LIBRARIES Qt5::Widgets)
endif()

## I prefer the Qt signals and slots to avoid defining "emit", "slots",
## etc because they can conflict with boost signals, so define QT_NO_KEYWORDS here.
add_definitions(-DQT_NO_KEYWORDS)

## Here we specify the list of source files.
## The generated MOC files are included automatically as headers.
set(SRC_FILES src/patharray_display.cpp)

## An rviz plugin is just a shared library, so here we declare the
## library to be called ``${PROJECT_NAME}``
add_library(${PROJECT_NAME} ${SRC_FILES})

## Link the myviz executable with whatever Qt libraries have been defined by
## the ``find_package(Qt4 ...)`` line above, or by the
## ``set(QT_LIBRARIES Qt5::Widgets)``, and with whatever libraries
## catkin has included.
##
## Although this puts "rviz_path_array" (or whatever you have
## called the project) as the name of the library, cmake knows it is a
## library and names the actual file something like
## "librviz_plugin_tutorials.so", or whatever is appropriate for your
## particular OS.
## END_TUTORIAL

## Install rules

install(TARGETS ${PROJECT_NAME}
  ARCHIVE
  DESTINATION lib
  LIBRARY
  DESTINATION lib
  RUNTIME
  DESTINATION bin)

install(FILES plugin_description.xml
  DESTINATION share/${PROJECT_NAME})

install(DIRECTORY icons/ DESTINATION share/${PROJECT_NAME}/icons)

ament_export_dependencies(ament_cmake)
ament_export_dependencies(rviz)
ament_export_dependencies(QtCore)
ament_export_dependencies(Qt4)
ament_export_dependencies(EXACT)
ament_export_dependencies(Core)
ament_export_dependencies(Qt5)
ament_export_dependencies(REQUIRED)
ament_export_dependencies(QtGui)
ament_export_dependencies(cohan_msgs)
ament_export_dependencies(Widgets)
ament_export_dependencies(${rviz_QT_VERSION})
ament_export_include_directories(${INCLUDE_DIRS})
ament_export_libraries(${PROJECT_NAME} ${LIBS})

ament_package()
