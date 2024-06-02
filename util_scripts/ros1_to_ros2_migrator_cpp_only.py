import os
import re
import argparse

def update_cpp_file(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read()
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

    # # ROS1 to ROS2 message header mappings
    # msg_replacements = [
    #     (r'#include\s*<(\w+)/(\w+)\.h>', r'#include "\1/msg/\2.hpp"'),
    #     (r'#include\s*<([^/]+)/([^/.]+)\.h>', r'#include "\1/msg/\2.hpp"'),
    # ]

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

    # Perform replacements
    for old, new in additional_msg_replacements + api_replacements:
        content = re.sub(old, new, content, flags=re.IGNORECASE)

    try:
        with open(file_path, 'w') as file:
            file.write(content)
    except IOError:
        print(f"Error: Unable to write to file {file_path}")

def process_directory(directory):
    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith('.cpp') or file.endswith('.h'):  # Include header files as well
                file_path = os.path.join(root, file)
                print(f"Migrating file: {file_path}")
                update_cpp_file(file_path)

def main():
    parser = argparse.ArgumentParser(description='Migrate ROS1 C++ include statements to ROS2 style in a directory tree.')
    parser.add_argument('root_dir', type=str, help='Root directory to crawl for C++ files')
    args = parser.parse_args()

    root_dir = args.root_dir
    if not os.path.isdir(root_dir):
        print(f"Error: {root_dir} is not a valid directory.")
        return

    print(f"Crawling {root_dir} for C++ files...")
    process_directory(root_dir)
    print("Migration complete. Please review the changes and test your code.")

if __name__ == "__main__":
    main()
