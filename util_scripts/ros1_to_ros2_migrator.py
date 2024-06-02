#!/usr/bin/env python3

import os
import re
import argparse

def update_cpp_file(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.readlines()
    except IOError:
        print(f"Error: Unable to read file {file_path}")
        return

    # Additional ROS1 to ROS2 message header mappings
    additional_msg_replacements = [
        (r'#include\s*<std_msgs/Header.h>', r'#include "std_msgs/msg/header.hpp"'),
        (r'#include\s*<std_msgs/String.h>', r'#include "std_msgs/msg/string.hpp"'),
        (r'#include\s*<std_msgs/Float32.h>', r'#include "std_msgs/msg/float32.hpp"'),
        (r'#include\s*<std_msgs/Int32.h>', r'#include "std_msgs/msg/int32.hpp"'),
        (r'#include\s*<geometry_msgs/PoseStamped.h>', r'#include "geometry_msgs/msg/pose_stamped.hpp"'),
        (r'#include\s*<geometry_msgs/Twist.h>', r'#include "geometry_msgs/msg/twist.hpp"'),
        (r'#include\s*<geometry_msgs/TwistStamped.h>', r'#include "geometry_msgs/msg/twist_stamped.hpp"'),
        (r'#include\s*<geometry_msgs/Point.h>', r'#include "geometry_msgs/msg/point.hpp"'),
        (r'#include\s*<geometry_msgs/Pose.h>', r'#include "geometry_msgs/msg/pose.hpp"'),
        (r'#include\s*<geometry_msgs/Quaternion.h>', r'#include "geometry_msgs/msg/quaternion.hpp"'),
        (r'#include\s*<sensor_msgs/LaserScan.h>', r'#include "sensor_msgs/msg/laser_scan.hpp"'),
        (r'#include\s*<sensor_msgs/Image.h>', r'#include "sensor_msgs/msg/image.hpp"'),
        (r'#include\s*<sensor_msgs/PointCloud2.h>', r'#include "sensor_msgs/msg/point_cloud2.hpp"'),
        (r'#include\s*<nav_msgs/Odometry.h>', r'#include "nav_msgs/msg/odometry.hpp"'),
        (r'#include\s*<nav_msgs/Path.h>', r'#include "nav_msgs/msg/path.hpp"'),
        (r'#include\s*<observations/Observation.h>', r'#include "observations/msg/observation.hpp"')
    ]

    # ROS1 to ROS2 message header mappings
    msg_replacements = [
        (r'#include\s*<(\w+)/(\w+)\.h>', r'#include "\1/msg/\2.hpp"'),
        (r'#include\s*<([^/]+)/([^/.]+)\.h>', r'#include "\1/msg/\2.hpp"'),
    ]

    # ROS1 to ROS2 API mappings
    api_replacements = [
        (r'ros::init\(([^)]+)\);', r'rclcpp::init(\1);'),
        (r'ros::NodeHandle\s+(\w+)[({]?', r'auto \1 = std::make_shared<rclcpp::Node>("\1");'),
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

    new_content = []
    for line in content:
        for old, new in additional_msg_replacements + msg_replacements + api_replacements:
            line = re.sub(old, new, line, flags=re.IGNORECASE)
        new_content.append(line)

    try:
        with open(file_path, 'w') as file:
            file.writelines(new_content)
    except IOError:
        print(f"Error: Unable to write to file {file_path}")

def update_cmakelists(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.readlines()
    except IOError:
        print(f"Error: Unable to read file {file_path}")
        return

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
        (r'catkin_package\([^)]+\)', 
        'ament_export_dependencies(\n'
        '  rclcpp rcutils std_msgs sensor_msgs geometry_msgs\n'
        ')\n'
        'ament_export_include_directories(include)\n'
        'ament_package()'),
        (r'add_message_files\(\s*FILES\s*([^)]+)\)', 
        'rosidl_generate_interfaces(${PROJECT_NAME}\n'
        '  \1\n'
        '  DEPENDENCIES\n'
        '  sensor_msgs\n'
        '  geometry_msgs\n'
        '  std_msgs\n'
        ')'),
        (r'generate_messages[^)]+\)', ''),
        (r'include_directories\([^)]+\)', 
        'target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC\n'
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

    new_content = []
    for line in content:
        for old, new in replacements:
            line = re.sub(old, new, line, flags=re.MULTILINE | re.DOTALL | re.IGNORECASE)
        new_content.append(line)

    try:
        with open(file_path, 'w') as file:
            file.writelines(new_content)
    except IOError:
        print(f"Error: Unable to write to file {file_path}")

def is_ros1_package(directory):
    cmakelists_path = os.path.join(directory, 'CMakeLists.txt')
    package_xml_path = os.path.join(directory, 'package.xml')
    
    if not (os.path.isfile(cmakelists_path) and os.path.isfile(package_xml_path)):
        return False
    
    with open(cmakelists_path, 'r') as f:
        if 'find_package(catkin' in f.read():
            return True
    
    with open(package_xml_path, 'r') as f:
        if '<build_depend>catkin</build_depend>' in f.read():
            return True
    
    return False

def process_directory(directory):
    for root, dirs, files in os.walk(directory):
        if is_ros1_package(root):
            print(f"Found ROS1 package: {root}")
            for file in files:
                file_path = os.path.join(root, file)
                if file.endswith('.cpp') or file.endswith('.h') or file.endswith('.hpp'):
                    print(f"  Migrating C++ file: {file}")
                    update_cpp_file(file_path)
                elif file == 'CMakeLists.txt':
                    print(f"  Migrating CMakeLists.txt")
                    update_cmakelists(file_path)

def main():
    parser = argparse.ArgumentParser(description='Migrate ROS1 C++ and CMake files to ROS2 in a directory tree.')
    parser.add_argument('root_dir', type=str, help='Root directory to crawl for ROS1 packages')
    args = parser.parse_args()

    root_dir = args.root_dir
    if not os.path.isdir(root_dir):
        print(f"Error: {root_dir} is not a valid directory.")
        return

    print(f"Crawling {root_dir} for ROS1 packages...")
    process_directory(root_dir)
    print("Migration complete. Please review the changes and test your code.")

if __name__ == "__main__":
    main()