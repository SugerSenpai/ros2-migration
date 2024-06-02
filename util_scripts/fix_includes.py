#!/usr/bin/env python3

import os
import re
import argparse
from pathlib import Path

def update_cpp_file(file_path):
    with open(file_path, 'r') as file:
        content = file.read()

    # ROS1 to ROS2 message header mappings
    msg_replacements = [
        (r'#include\s*<(\w+)/(\w+)\.h>', r'#include "\1/msg/\L\2.hpp"'),
        (r'#include\s*<observations/Observation\.h>', r'#include "observations/msg/observation.hpp"'),
    ]

    # ROS1 to ROS2 API mappings
    api_replacements = [
        (r'ros::init\(([^)]+)\);', r'rclcpp::init(\1);'),
        (r'ros::NodeHandle\s+(\w+);', r'auto \1 = std::make_shared<rclcpp::Node>("\1");'),
        (r'ros::Publisher\s+(\w+)\s*=\s*(\w+)\.advertise<([^>]+)>\(([^)]+)\);', 
         r'auto \1 = \2->create_publisher<\3>(\4);'),
        (r'ros::Subscriber\s+(\w+)\s*=\s*(\w+)\.subscribe<([^>]+)>\(([^,]+),\s*(\d+),\s*([^)]+)\);',
         r'auto \1 = \2->create_subscription<\3>(\4, \5, std::bind(\6, std::placeholders::_1));'),
        (r'ros::spin\(\);', r'rclcpp::spin(node);'),
        (r'ros::Time::now\(\)', r'node->now()'),
        (r'ros::Rate\s+(\w+)\((\d+)\);', r'rclcpp::Rate \1(\2);'),
        (r'(\w+)\.publish\(([^)]+)\);', r'\1->publish(\2);'),
        (r'(\w+)\.getParam\("([^"]+)",\s*([^)]+)\);', r'\3 = \1->declare_parameter("\2", \3);'),
        (r'(\w+)\.setParam\("([^"]+)",\s*([^)]+)\);', r'\1->set_parameter(rclcpp::Parameter("\2", \3));'),
    ]

    for old, new in msg_replacements + api_replacements:
        content = re.sub(old, new, content, flags=re.MULTILINE | re.IGNORECASE)

    with open(file_path, 'w') as file:
        file.write(content)

def update_cmakelists(file_path):
    with open(file_path, 'r') as file:
        content = file.read()

    replacements = [
        (r'cmake_minimum_required\(VERSION [0-9.]+\)', 'cmake_minimum_required(VERSION 3.5)'),
        (r'find_package\(catkin REQUIRED COMPONENTS[^)]+\)', 
         'find_package(ament_cmake REQUIRED)\n'
         'find_package(rclcpp REQUIRED)\n'
         'find_package(rcutils REQUIRED)\n'
         'find_package(std_msgs REQUIRED)\n'
         'find_package(sensor_msgs REQUIRED)\n'
         'find_package(geometry_msgs REQUIRED)\n'
         'find_package(rosidl_default_generators REQUIRED)'),
        (r'add_message_files\([^)]+\)', 
         'rosidl_generate_interfaces(${PROJECT_NAME}\n'
         '  "msg/Observation.msg"\n'
         '  DEPENDENCIES\n'
         '  sensor_msgs\n'
         '  geometry_msgs\n'
         '  std_msgs\n'
         ')'),
        (r'generate_messages[^)]+\)', ''),
        (r'catkin_package\([^)]+\)', 
         'ament_export_dependencies(\n'
         '  rclcpp rcutils std_msgs sensor_msgs geometry_msgs\n'
         ')\n'
         'ament_export_include_directories(include)\n'
         'ament_package()'),
        (r'include_directories\([^)]+\)', 
         'target_include_directories(${target} PUBLIC\n'
         '  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_cpp>\n'
         '  ${CMAKE_CURRENT_SOURCE_DIR}\n'
         '  ./\n'
         ')'),
        (r'target_link_libraries\((\w+)[^)]+\)', 
         'target_link_libraries(\\1\n'
         '  ${cpp_typesupport_target}\n'
         '  # ${SDL2_LIBRARIES}\n'
         '  # ${OPENGL_LIBRARIES}\n'
         ')'),
        (r'install\(\s*TARGETS[^)]+\)', 
         'install(TARGETS\n'
         '  ${target}\n'
         '  DESTINATION lib/${PROJECT_NAME}\n'
         ')'),
    ]

    for old, new in replacements:
        content = re.sub(old, new, content, flags=re.MULTILINE | re.DOTALL)

    with open(file_path, 'w') as file:
        file.write(content)

def process_directory(directory):
    for root, _, files in os.walk(directory):
        for file in files:
            file_path = os.path.join(root, file)
            if file.endswith('.cpp') or file.endswith('.h'):
                print(f"Processing C++ file: {file_path}")
                update_cpp_file(file_path)
            elif file == 'CMakeLists.txt':
                print(f"Processing CMakeLists.txt: {file_path}")
                update_cmakelists(file_path)

def main():
    parser = argparse.ArgumentParser(description='Migrate ROS1 C++ and CMake files to ROS2.')
    parser.add_argument('directory', type=str, help='Directory to process')
    args = parser.parse_args()

    directory = args.directory
    if not os.path.isdir(directory):
        print(f"Error: {directory} is not a valid directory.")
        return

    process_directory(directory)
    print("Migration complete. Please review the changes and test your code.")

if __name__ == "__main__":
    main()