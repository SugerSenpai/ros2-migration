import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='map_file',
            default_value=get_package_share_directory(
                'light_scan_sim') + '/data/office.yaml'
        ),
        launch_ros.actions.Node(
            package='map_server',
            executable='map_server',
            name='map_server'
        ),
        launch_ros.actions.Node(
            package='rostopic',
            executable='rostopic',
            name='publish_segment_list',
            output='screen'
        ),
        launch_ros.actions.Node(
            package='rostopic',
            executable='rostopic',
            name='publish_material_list',
            output='screen'
        ),
        launch_ros.actions.Node(
            package='light_scan_sim',
            executable='pose_estimate_tf_publisher.py',
            name='pose_estimate_publisher',
            output='screen'
        ),
        launch_ros.actions.Node(
            package='light_scan_sim',
            executable='visualize_segment_list.py',
            name='visualize_segment_list',
            output='screen',
            parameters=[
                {
                    'input_topic': '/map_segments'
                },
                {
                    'materials_topic': '/map_materials'
                },
                {
                    'output_topic': '/map_segment_vis'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='light_scan_sim',
            executable='light_scan_sim_node',
            name='light_scan_sim',
            output='screen',
            parameters=[
                get_package_share_directory(
                    'light_scan_sim') + '/config/config.yaml'
            ]
        ),
        launch_ros.actions.Node(
            package='rviz',
            executable='rviz',
            name='visualisation'
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
