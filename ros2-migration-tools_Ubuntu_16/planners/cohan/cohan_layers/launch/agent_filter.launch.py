import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='simulator',
            default_value='stage'
        ),
        launch.actions.DeclareLaunchArgument(
            name='namespace',
            default_value=''
        ),
        launch.actions.DeclareLaunchArgument(
            name='node_start_delay',
            default_value='1.0'
        ),
        launch_ros.actions.Node(
            package='cohan_layers',
            executable='agent_filter.py',
            name='agent_filter_laser',
            output='screen'
        ),
        launch_ros.actions.Node(
            package='cohan_layers',
            executable='agent_filter.py',
            name='agent_filter_laser',
            output='screen'
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
