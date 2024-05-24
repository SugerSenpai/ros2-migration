import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='model_file',
            default_value=get_package_share_directory(
                'drl_vo_barn_nav') + '/src/model/drl_vo.zip'
        ),
        launch.actions.DeclareLaunchArgument(
            name='start',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='goal_x',
            default_value='0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='goal_y',
            default_value='10'
        ),
        launch_ros.actions.Node(
            package='drl_vo_barn_nav',
            executable='drl_vo_inference.py',
            name='drl_vo_cmd',
            output='screen',
            parameters=[
                {
                    'model_file': launch.substitutions.LaunchConfiguration('model_file')
                },
                {
                    'start': launch.substitutions.LaunchConfiguration('start')
                },
                {
                    'goal_x': launch.substitutions.LaunchConfiguration('goal_x')
                },
                {
                    'goal_y': launch.substitutions.LaunchConfiguration('goal_y')
                }
            ]
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
