import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='goal_x',
            default_value='0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='goal_y',
            default_value='10'
        ),
        launch.actions.DeclareLaunchArgument(
            name='scan_topic',
            default_value='/front/scan'
        ),
        launch_ros.actions.Node(
            package='barn_challenge',
            executable='gap_navigation',
            name='gap_navigation',
            output='screen',
            parameters=[
                {
                    'goal_x': launch.substitutions.LaunchConfiguration('goal_x')
                },
                {
                    'goal_y': launch.substitutions.LaunchConfiguration('goal_y')
                },
                {
                    'left': '-100'
                },
                {
                    'top': '-100'
                },
                {
                    'bwidth': '200'
                },
                {
                    'bheight': '200'
                },
                {
                    'gapThresh': '.65'
                },
                {
                    'dist': '10'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='barn_challenge',
            executable='reduce_lidar',
            name='reduce_lidar',
            output='screen',
            parameters=[
                {
                    'cap': '10'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='barn_challenge',
            executable='cone_bench.py',
            name='cone_bench',
            output='screen'
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
