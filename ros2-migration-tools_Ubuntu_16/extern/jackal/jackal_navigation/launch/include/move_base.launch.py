import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch_ros.actions.Node(
            package='move_base',
            executable='move_base',
            name='move_base',
            output='screen',
            parameters=[
                {
                    'base_global_planner': 'navfn/NavfnROS'
                },
                {
                    'base_local_planner': 'base_local_planner/TrajectoryPlannerROS'
                },
                get_package_share_directory(
                    'jackal_navigation') + '/params/map_nav_params/local_costmap_params.yaml',
                get_package_share_directory(
                    'jackal_navigation') + '/params/map_nav_params/global_costmap_params.yaml',
                get_package_share_directory(
                    'jackal_navigation') + '/params/base_local_planner_params.yaml',
                get_package_share_directory(
                    'jackal_navigation') + '/params/move_base_params.yaml'
            ]
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
