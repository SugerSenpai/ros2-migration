import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch_ros.actions.Node(
            package='tf',
            executable='static_transform_publisher',
            name='odom_transform'
        ),
        launch_ros.actions.Node(
            package='map_server',
            executable='map_server',
            name='map_server'
        ),
        launch_ros.actions.Node(
            package='global_planner',
            executable='planner',
            name='gbl_planner',
            output='screen'
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
