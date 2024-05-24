import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='scan_topic',
            default_value="$(eval optenv('JACKAL_LASER_TOPIC', 'front/scan'))"
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'jackal_navigation'), 'launch/include/gmapping.launch.py')
            ),
            launch_arguments={
                'scan_topic': launch.substitutions.LaunchConfiguration('scan_topic')
            }.items()
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'jackal_navigation'), 'launch/include/move_base.launch.py')
            )
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
