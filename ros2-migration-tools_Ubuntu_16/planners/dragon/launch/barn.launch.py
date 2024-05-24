import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='use_sim_time',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='gui',
            default_value='false'
        ),
        launch.actions.DeclareLaunchArgument(
            name='headless',
            default_value='false'
        ),
        launch.actions.DeclareLaunchArgument(
            name='world_number',
            default_value='280'
        ),
        launch.actions.DeclareLaunchArgument(
            name='front_laser',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='default_config',
            default_value='front_laser'
        ),
        launch.actions.DeclareLaunchArgument(
            name='default_config',
            default_value='base'
        ),
        launch.actions.DeclareLaunchArgument(
            name='config',
            default_value=launch.substitutions.LaunchConfiguration(
                'default_config')
        ),
        launch.actions.DeclareLaunchArgument(
            name='joystick',
            default_value='false'
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'gazebo_ros'), 'launch/empty_world.launch.py')
            ),
            launch_arguments={
                'debug': '0',
                'gui': launch.substitutions.LaunchConfiguration('gui'),
                'use_sim_time': launch.substitutions.LaunchConfiguration('use_sim_time'),
                'headless': launch.substitutions.LaunchConfiguration('headless'),
                'world_name': get_package_share_directory('jackal_helper') + '/worlds/BARN/world_264.world'
            }.items()
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'jackal_gazebo'), 'launch/spawn_jackal.launch.py')
            ),
            launch_arguments={
                'x': '-2',
                'y': '3',
                'z': '1.0',
                'yaw': '1.570796',
                'config': launch.substitutions.LaunchConfiguration('config'),
                'joystick': launch.substitutions.LaunchConfiguration('joystick')
            }.items()
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
