import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='plot',
            default_value='false'
        ),
        launch.actions.DeclareLaunchArgument(
            name='plot_states',
            default_value='false'
        ),
        launch.actions.DeclareLaunchArgument(
            name='cpu_time',
            default_value='false'
        ),
        launch_ros.actions.Node(
            package='mpc_local_planner',
            executable='test_mpc_optim_node',
            name='test_mpc_optim_node',
            output='screen',
            parameters=[
                {
                    'controller/print_cpu_time': 'true'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='rviz',
            executable='rviz',
            name='rviz'
        ),
        launch_ros.actions.Node(
            package='mpc_local_planner',
            executable='plot_optimal_control_results.py',
            name='ocp_result_plotter',
            parameters=[
                {
                    'plot_rate': '2'
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
