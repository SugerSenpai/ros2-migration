import os

def replace_include_statements(root_dir):
    ros_include = '#include <ros/ros.h>'
    rclcpp_include = '#include "rclcpp/rclcpp.h"'
    tf_include = '#include <tf/transform_listener.h>'
    tf2_include = '#include "tf2_ros/transform_listener.h"'
    
    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename.endswith('.cpp') or filename.endswith('.h'):
                file_path = os.path.join(dirpath, filename)
                with open(file_path, 'r') as file:
                    file_content = file.read()
                
                # Replace the include statements
                new_content = file_content.replace(ros_include, rclcpp_include).replace(tf_include, tf2_include)
                
                # Write the new content back to the file if changes were made
                if new_content != file_content:
                    with open(file_path, 'w') as file:
                        file.write(new_content)
                    print(f'Processed file: {file_path}')

# Replace 'your_directory_path' with the path to your directory
replace_include_statements('arena')
