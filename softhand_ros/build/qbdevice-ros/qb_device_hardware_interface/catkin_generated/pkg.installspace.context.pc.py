# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;hardware_interface;joint_limits_interface;transmission_interface;urdf;qb_device_msgs;qb_device_srvs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lqb_device_hardware_interface".split(';') if "-lqb_device_hardware_interface" != "" else []
PROJECT_NAME = "qb_device_hardware_interface"
PROJECT_SPACE_DIR = "/home/iclab/softhand_ros/install"
PROJECT_VERSION = "2.1.1"
