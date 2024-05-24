import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='speed',
            default_value='0.12'
        ),
        launch.actions.DeclareLaunchArgument(
            name='file',
            default_value='cadrl_node_tb3.py'
        ),
        launch_ros.actions.Node(
            package='cadrl-ros',
            executable='cadrl_node_tb3.py',
            name='cadrl_node',
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
