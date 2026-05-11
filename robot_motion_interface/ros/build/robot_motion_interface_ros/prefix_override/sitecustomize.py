import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/workspace/libs/robot_motion_interface/ros/install/robot_motion_interface_ros'
