import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='rviz',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='plot',
            default_value='false'
        ),
        launch.actions.DeclareLaunchArgument(
            name='plot_states',
            default_value='false'
        ),
        launch_ros.actions.Node(
            package='stage_ros',
            executable='stageros',
            name='stageros',
            parameters=[
                {
                    '/use_sim_time': 'true'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='move_base',
            executable='move_base',
            name='move_base',
            output='screen',
            parameters=[
                {
                    '/use_sim_time': 'true'
                },
                {
                    'base_global_planner': 'global_planner/GlobalPlanner'
                },
                {
                    'planner_frequency': '1.0'
                },
                {
                    'planner_patience': '5.0'
                },
                {
                    'base_local_planner': 'mpc_local_planner/MpcLocalPlannerROS'
                },
                {
                    'controller_frequency': '5.0'
                },
                {
                    'controller_patience': '15.0'
                },
                {
                    'MpcLocalPlannerROS/controller/publish_ocp_results': 'true'
                },
                get_package_share_directory(
                    'mpc_local_planner_examples') + '/cfg/diff_drive/local_costmap_params.yaml',
                get_package_share_directory(
                    'mpc_local_planner_examples') + '/cfg/diff_drive/global_costmap_params.yaml',
                get_package_share_directory('mpc_local_planner_examples') +
                '/cfg/diff_drive/mpc_local_planner_params_minimum_time.yaml',
                get_package_share_directory(
                    'mpc_local_planner_examples') + '/cfg/diff_drive/costmap_converter_params.yaml'
            ]
        ),
        launch_ros.actions.Node(
            package='map_server',
            executable='map_server',
            name='map_server',
            output='screen',
            parameters=[
                {
                    '/use_sim_time': 'true'
                },
                {
                    'frame_id': 'map'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='amcl',
            executable='amcl',
            name='amcl',
            output='screen',
            parameters=[
                {
                    '/use_sim_time': 'true'
                },
                {
                    'initial_pose_x': '2'
                },
                {
                    'initial_pose_y': '2'
                },
                {
                    'initial_pose_a': '0'
                },
                get_package_share_directory(
                    'mpc_local_planner_examples') + '/cfg/amcl_params.yaml'
            ]
        ),
        launch_ros.actions.Node(
            package='rviz',
            executable='rviz',
            name='rviz',
            parameters=[
                {
                    '/use_sim_time': 'true'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='mpc_local_planner',
            executable='plot_optimal_control_results.py',
            name='ocp_result_plotter',
            output='screen',
            parameters=[
                {
                    '/use_sim_time': 'true'
                },
                {
                    'ocp_result_topic': '/move_base/MpcLocalPlannerROS/ocp_result'
                },
                {
                    'plot_rate': '5'
                },
                {
                    'plot_states': launch.substitutions.LaunchConfiguration('plot_states')
                }
            ]
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
