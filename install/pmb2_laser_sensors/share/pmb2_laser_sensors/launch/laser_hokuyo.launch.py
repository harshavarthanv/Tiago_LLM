# Copyright (c) 2025 PAL Robotics S.L. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

from launch import LaunchDescription
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode
from launch_pal import get_pal_configuration


def generate_launch_description():

    ld = LaunchDescription()

    laser_node = 'laser'
    pal_laser_filters_node = 'pal_laser_filters'
    dlo_node = 'direct_laser_odometry'
    lifecycle_manager_node = 'lifecycle_manager_laser'

    laser_config = get_pal_configuration(
        pkg='hokuyo_laser_cfg',
        node=laser_node,
        ld=ld,
        cmdline_args=False,
    )
    pal_laser_filters_config = get_pal_configuration(
        pkg='pal_laser_filters',
        node=pal_laser_filters_node,
        ld=ld,
        cmdline_args=False,
    )
    dlo_config = get_pal_configuration(
        pkg='dlo_ros',
        node=dlo_node,
        ld=ld,
        cmdline_args=False,
    )
    lifecycle_manager_config = get_pal_configuration(
        pkg='nav2_lifecycle_manager',
        node=lifecycle_manager_node,
        ld=ld,
        cmdline_args=False,
    )

    laser_container = ComposableNodeContainer(
        name='laser_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container',
        composable_node_descriptions=[
            # Laser Driver
            ComposableNode(
                package='urg_node',
                plugin='urg_node::UrgNode',
                name=laser_node,
                parameters=laser_config['parameters'],
                remappings=laser_config['remappings'],
            ),
            # Laser Filters
            ComposableNode(
                package='pal_laser_filters',
                plugin='pal_laser_filters::ScanFilterChain',
                name=pal_laser_filters_node,
                parameters=pal_laser_filters_config['parameters'],
                remappings=pal_laser_filters_config['remappings'],
            ),
            # Direct Laser Odometry
            ComposableNode(
                package='dlo_ros',
                plugin='dlo::DirectLaserOdometryNode',
                name=dlo_node,
                parameters=dlo_config['parameters'],
                remappings=dlo_config['remappings'],
            ),
            # Nav2 Lifecycle Manager
            ComposableNode(
                package='nav2_lifecycle_manager',
                plugin='nav2_lifecycle_manager::LifecycleManager',
                name=lifecycle_manager_node,
                parameters=lifecycle_manager_config['parameters'],
                remappings=lifecycle_manager_config['remappings'],
            ),
        ],
        output='screen',
    )

    ld.add_action(laser_container)
    return ld
