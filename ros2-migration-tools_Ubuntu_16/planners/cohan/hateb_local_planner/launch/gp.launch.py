import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='node_start_delay',
            default_value='10.0'
        ),
        launch_ros.actions.Node(
            package='tf',
            executable='static_transform_publisher',
            name='odom_transform_r'
        ),
        launch_ros.actions.Node(
            package='tf',
            executable='static_transform_publisher',
            name='odom_transform_h1'
        ),
        launch_ros.actions.Node(
            package='tf',
            executable='static_transform_publisher',
            name='odom_transform_h2'
        ),
        launch_ros.actions.Node(
            package='map_server',
            executable='map_server',
            name='map_server'
        ),
        launch_ros.actions.Node(
            package='stage_ros',
            executable='agents_bridge.py',
            name='agents',
            output='screen'
        ),
        launch_ros.actions.Node(
            package='agent_path_prediction',
            executable='agent_path_prediction',
            name='agent_path_predict',
            output='screen',
            parameters=[
                {
                    'velobs_mul': '1.0'
                },
                {
                    'velscale_mul': '2.0'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='agent_path_prediction',
            executable='predict_goal.py',
            name='agent_goal_predict',
            output='screen'
        ),
        launch_ros.actions.Node(
            package='global_planner',
            executable='planner',
            name='global_planner',
            output='screen'
        ),
        launch_ros.actions.Node(
            package='hateb_local_planner',
            executable='local_planner',
            name='local_planner',
            output='screen'
        ),
        launch_ros.actions.Node(
            package='hateb_local_planner',
            executable='get_optim_vel',
            name='get_optim_vel',
            output='screen'
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'stage_ros'), 'launch/stage_pr2_laas_adream.launch.py')
            )
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'cohan_layers'), 'launch/agent_filter.launch.py')
            ),
            launch_arguments={
                'simulator': 'stage'
            }.items()
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
