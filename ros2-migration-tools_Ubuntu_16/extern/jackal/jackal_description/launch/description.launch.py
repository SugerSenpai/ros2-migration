import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='config',
            default_value='base'
        ),
        launch.actions.DeclareLaunchArgument(
            name='env_runner',
            default_value="$(eval 'env_run' if not optenv('OS', 'unknown').lower().startswith('windows') else 'env_run.bat')"
        ),
        launch_ros.actions.Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            parameters=[
                {
                    'robot_description': None
                }
            ]
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
