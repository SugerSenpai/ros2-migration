import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='use_map_topic',
            default_value='false'
        ),
        launch.actions.DeclareLaunchArgument(
            name='scan_topic',
            default_value="$(eval optenv('JACKAL_LASER_TOPIC', 'front/scan'))"
        ),
        launch_ros.actions.Node(
            package='amcl',
            executable='amcl',
            name='amcl',
            parameters=[
                {
                    'use_map_topic': launch.substitutions.LaunchConfiguration('use_map_topic')
                },
                {
                    'odom_model_type': 'diff'
                },
                {
                    'odom_alpha5': '0.1'
                },
                {
                    'gui_publish_rate': '10.0'
                },
                {
                    'laser_max_beams': '720'
                },
                {
                    'laser_min_range': '0.1'
                },
                {
                    'laser_max_range': '30.0'
                },
                {
                    'min_particles': '500'
                },
                {
                    'max_particles': '2000'
                },
                {
                    'kld_err': '0.05'
                },
                {
                    'kld_z': '0.99'
                },
                {
                    'odom_alpha1': '0.2'
                },
                {
                    'odom_alpha2': '0.2'
                },
                {
                    'odom_alpha3': '0.2'
                },
                {
                    'odom_alpha4': '0.2'
                },
                {
                    'laser_z_hit': '0.5'
                },
                {
                    'laser_z_short': '0.05'
                },
                {
                    'laser_z_max': '0.05'
                },
                {
                    'laser_z_rand': '0.5'
                },
                {
                    'laser_sigma_hit': '0.2'
                },
                {
                    'laser_lambda_short': '0.1'
                },
                {
                    'laser_model_type': 'likelihood_field'
                },
                {
                    'laser_likelihood_max_dist': '2.0'
                },
                {
                    'update_min_d': '0.1'
                },
                {
                    'update_min_a': '0.314'
                },
                {
                    'odom_frame_id': 'odom'
                },
                {
                    'base_frame_id': 'base_link'
                },
                {
                    'global_frame_id': 'map'
                },
                {
                    'resample_interval': '1'
                },
                {
                    'transform_tolerance': '1.0'
                },
                {
                    'recovery_alpha_slow': '0.0'
                },
                {
                    'recovery_alpha_fast': '0.1'
                },
                {
                    'initial_pose_x': '0.0'
                },
                {
                    'initial_pose_y': '0.0'
                },
                {
                    'initial_pose_a': '0.0'
                },
                {
                    'receive_map_topic': 'true'
                },
                {
                    'first_map_only': 'false'
                }
            ]
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
