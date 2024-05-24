import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='seed',
            default_value='0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='use_lfh',
            default_value='true'
        ),
        launch.actions.DeclareLaunchArgument(
            name='use_ego',
            default_value="$(eval not arg('use_lfh'))"
        ),
        launch.actions.DeclareLaunchArgument(
            name='random_forest',
            default_value='false'
        ),
        launch.actions.DeclareLaunchArgument(
            name='c_num',
            default_value='200'
        ),
        launch.actions.DeclareLaunchArgument(
            name='p_num',
            default_value='200'
        ),
        launch.actions.DeclareLaunchArgument(
            name='map_size_x',
            default_value='40.0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='map_size_y',
            default_value='40.0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='map_size_z',
            default_value=' 3.0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='odom_topic',
            default_value='/visual_slam/odom'
        ),
        launch.actions.DeclareLaunchArgument(
            name='bspline_topic',
            default_value='/planning/bspline_truth'
        ),
        launch_ros.actions.Node(
            package='ego_planner',
            executable='traj_server',
            name='traj_server',
            output='screen',
            parameters=[
                {
                    'traj_server/time_forward': '1.0'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='waypoint_generator',
            executable='waypoint_generator',
            name='waypoint_generator',
            output='screen',
            parameters=[
                {
                    'waypoint_type': 'manual-lonely-waypoint'
                }
            ]
        ),
        launch_ros.actions.Node(
            package='LfH',
            executable='collision_check.py',
            name='collision_checker',
            output='screen'
        ),
        launch_ros.actions.Node(
            package='LfH',
            executable='run_policy_3D.py',
            name='LfH_3D_policy',
            output='screen',
            on_exit=launch.actions.Shutdown()
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'ego_planner'), 'launch/advanced_param.xml.py')
            ),
            launch_arguments={
                'map_size_x_': launch.substitutions.LaunchConfiguration('map_size_x'),
                'map_size_y_': launch.substitutions.LaunchConfiguration('map_size_y'),
                'map_size_z_': launch.substitutions.LaunchConfiguration('map_size_z'),
                'odometry_topic': launch.substitutions.LaunchConfiguration('odom_topic'),
                'bspline_topic': launch.substitutions.LaunchConfiguration('bspline_topic'),
                'use_ego': launch.substitutions.LaunchConfiguration('use_ego'),
                'camera_pose_topic': '/pcl_render_node/camera_pose',
                'depth_topic': '/pcl_render_node/depth',
                'cloud_topic': '/pcl_render_node/cloud',
                'cx': '321.04638671875',
                'cy': '243.44969177246094',
                'fx': '387.229248046875',
                'fy': '387.229248046875',
                'max_vel': '2.0',
                'max_acc': '3.0',
                'planning_horizon': '7.5',
                'flight_type': '1',
                'point_num': '5',
                'point0_x': '-15.0',
                'point0_y': '0.0',
                'point0_z': '1.0',
                'point1_x': '0.0',
                'point1_y': '15.0',
                'point1_z': '1.0',
                'point2_x': '15.0',
                'point2_y': '0.0',
                'point2_z': '1.0',
                'point3_x': '0.0',
                'point3_y': '-15.0',
                'point3_z': '1.0',
                'point4_x': '-15.0',
                'point4_y': '0.0',
                'point4_z': '1.0'
            }.items()
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'ego_planner'), 'launch/simulator.xml.py')
            ),
            launch_arguments={
                'map_size_x_': launch.substitutions.LaunchConfiguration('map_size_x'),
                'map_size_y_': launch.substitutions.LaunchConfiguration('map_size_y'),
                'map_size_z_': launch.substitutions.LaunchConfiguration('map_size_z'),
                'c_num': launch.substitutions.LaunchConfiguration('c_num'),
                'p_num': launch.substitutions.LaunchConfiguration('p_num'),
                'min_dist': '1',
                'seed': launch.substitutions.LaunchConfiguration('seed'),
                'random_forest': launch.substitutions.LaunchConfiguration('random_forest'),
                'odometry_topic': launch.substitutions.LaunchConfiguration('odom_topic')
            }.items()
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
