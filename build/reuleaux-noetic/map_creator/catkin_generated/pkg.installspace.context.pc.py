# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "message_runtime;std_msgs;geometry_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lsphere_discretization;-lkinematics;-lhdf5_dataset;-lroscpp".split(';') if "-lsphere_discretization;-lkinematics;-lhdf5_dataset;-lroscpp" != "" else []
PROJECT_NAME = "map_creator"
PROJECT_SPACE_DIR = "/home/student/workspaces/ws_kw/install"
PROJECT_VERSION = "0.0.0"
