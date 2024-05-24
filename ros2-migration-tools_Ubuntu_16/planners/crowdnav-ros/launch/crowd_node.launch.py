import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='speed',
            default_value='0.3'
        ),
        launch_ros.actions.Node(
            package='crowdnav-ros',
            executable='crowd_node_tb3.py',
            name='crowd_node',
            output='screen',
            parameters=[
                {
                    '~speed': launch.substitutions.LaunchConfiguration('speed')
                }
            ]
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
