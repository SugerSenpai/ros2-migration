import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch_ros.actions.Node(
            package='drl_vo_barn_nav',
            executable='pure_pursuit.py',
            name='pure_pursuit',
            output='screen',
            on_exit=launch.actions.Shutdown()
        ),
        launch_ros.actions.Node(
            package='drl_vo_barn_nav',
            executable='barn_data_pub.py',
            name='barn_data_pub'
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
