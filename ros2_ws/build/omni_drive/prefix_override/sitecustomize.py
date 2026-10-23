import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/chinmay/smiley1/project/ros2_ws/install/omni_drive'
