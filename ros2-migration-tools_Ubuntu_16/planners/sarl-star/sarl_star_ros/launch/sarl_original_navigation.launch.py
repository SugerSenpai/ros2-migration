import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='laser_type',
            default_value='hokuyo'
        ),
        launch.actions.DeclareLaunchArgument(
            name='map_file',
            default_value='sarl_star_ros/map/wangtong.yaml'
        ),
        launch.actions.DeclareLaunchArgument(
            name='custom_amcl_launch_file',
            default_value=launch.substitutions.LaunchConfiguration(
                'laser_type')
        ),
        launch.actions.DeclareLaunchArgument(
            name='initial_pose_x',
            default_value='-0.5'
        ),
        launch.actions.DeclareLaunchArgument(
            name='initial_pose_y',
            default_value='9.6'
        ),
        launch.actions.DeclareLaunchArgument(
            name='initial_pose_a',
            default_value='-1.35'
        ),
        launch.actions.DeclareLaunchArgument(
            name='custom_param_file',
            default_value=launch.substitutions.LaunchConfiguration(
                'laser_type')
        ),
        launch_ros.actions.Node(
            package='laser_filters',
            executable='scan_to_scan_filter_chain',
            name='laser_filter',
            parameters=[
                get_package_share_directory(
                    'laser_filters') + '/laserscan_filter.yaml'
            ]
        ),
        launch_ros.actions.Node(
            package='map_server',
            executable='map_server',
            name='map_server'
        ),
        launch_ros.actions.Node(
            package='sarl_star_ros',
            executable='sarl_original_node.py',
            name='sarl_original_node',
            output='screen'
        ),
        launch_ros.actions.Node(
            package='rviz',
            executable='rviz',
            name='rviz'
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'turtlebot_navigation'), 'laser/driver/$(arg laser_type)_laser.launch.py')
            )
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'people_velocity_tracker'), 'launch/tracked_detector.launch.py')
            )
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'turtlebot_navigation'), 'launch/includes/$(arg laser_type)_move_base.launch.xml.py')
            ),
            launch_arguments={
                'custom_param_file': launch.substitutions.LaunchConfiguration('custom_param_file')
            }.items()
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
