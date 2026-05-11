from setuptools import find_packages
from setuptools import setup

setup(
    name='robot_motion_interface_ros_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('robot_motion_interface_ros_msgs', 'robot_motion_interface_ros_msgs.*')),
)
