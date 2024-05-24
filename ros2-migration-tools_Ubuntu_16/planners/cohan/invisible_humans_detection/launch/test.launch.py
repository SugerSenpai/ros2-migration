import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch_ros.actions.Node(
            package='invisible_humans_detection',
            executable='invisible_humans_detection_node',
            name='map_scanner',
            output='screen'
        ),
        launch_ros.actions.Node(
            package='invisible_humans_detection',
            executable='locate_invisible_humans_new.py',
            name='invisible_humans',
            output='screen'
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
