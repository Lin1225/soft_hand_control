# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;actionlib;combined_robot_hw;control_msgs;controller_manager;qb_device_hardware_interface;qb_device_utils".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lqb_device_control".split(';') if "-lqb_device_control" != "" else []
PROJECT_NAME = "qb_device_control"
PROJECT_SPACE_DIR = "/home/iclab/softhand_ros/install"
PROJECT_VERSION = "2.1.1"
