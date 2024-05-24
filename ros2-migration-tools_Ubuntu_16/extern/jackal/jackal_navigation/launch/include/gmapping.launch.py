import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='scan_topic',
            default_value="$(eval optenv('JACKAL_LASER_TOPIC', 'front/scan'))"
        ),
        launch_ros.actions.Node(
            package='gmapping',
            executable='slam_gmapping',
            name='slam_gmapping',
            output='screen',
            parameters=[
                {
                    'odom_frame': 'odom'
                },
                {
                    'base_frame': 'base_link'
                },
                {
                    'map_frame': 'map'
                },
                {
                    'throttle_scans': '1'
                },
                {
                    'map_update_interval': '5.0'
                },
                {
                    'maxUrange': '5.0'
                },
                {
                    'maxRange': '10.0'
                },
                {
                    'sigma': '0.05'
                },
                {
                    'kernelSize': '1'
                },
                {
                    'lstep': '0.05'
                },
                {
                    'astep': '0.05'
                },
                {
                    'iterations': '5'
                },
                {
                    'lsigma': '0.075'
                },
                {
                    'ogain': '3.0'
                },
                {
                    'minimumScore': '0.0'
                },
                {
                    'lskip': '0'
                },
                {
                    'srr': '0.01'
                },
                {
                    'srt': '0.02'
                },
                {
                    'str': '0.01'
                },
                {
                    'stt': '0.02'
                },
                {
                    'linearUpdate': '0.1'
                },
                {
                    'angularUpdate': '0.05'
                },
                {
                    'temporalUpdate': '-1.0'
                },
                {
                    'resampleThreshold': '0.5'
                },
                {
                    'particles': '10'
                },
                {
                    'xmin': '-10.0'
                },
                {
                    'ymin': '-10.0'
                },
                {
                    'xmax': '10.0'
                },
                {
                    'ymax': '10.0'
                },
                {
                    'delta': '0.02'
                },
                {
                    'llsamplerange': '0.01'
                },
                {
                    'llsamplestep': '0.01'
                },
                {
                    'lasamplerange': '0.005'
                },
                {
                    'lasamplestep': '0.005'
                }
            ]
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
