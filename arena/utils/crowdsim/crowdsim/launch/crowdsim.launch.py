import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='sfm',
            default_value='pysocial'
        ),
        launch.actions.DeclareLaunchArgument(
            name='scene_file',
            default_value=''
        ),
        launch.actions.DeclareLaunchArgument(
            name='visualize',
            default_value='false'
        ),
        launch_ros.actions.Node(
            package='crowdsim_agents',
            executable='crowdsim_agents',
            name='crowdsim_agents',
            on_exit=launch.actions.Shutdown(),
            parameters=[
                {
                    'forcemodel': launch.substitutions.LaunchConfiguration('sfm')
                }
            ]
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
