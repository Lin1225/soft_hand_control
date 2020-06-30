# Install script for directory: /home/iclab/softhand_ros/src/qbdevice-ros/qb_device_srvs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/iclab/softhand_ros/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qb_device_srvs/srv" TYPE FILE FILES
    "/home/iclab/softhand_ros/src/qbdevice-ros/qb_device_srvs/srv/GetMeasurements.srv"
    "/home/iclab/softhand_ros/src/qbdevice-ros/qb_device_srvs/srv/InitializeDevice.srv"
    "/home/iclab/softhand_ros/src/qbdevice-ros/qb_device_srvs/srv/SetCommands.srv"
    "/home/iclab/softhand_ros/src/qbdevice-ros/qb_device_srvs/srv/SetPID.srv"
    "/home/iclab/softhand_ros/src/qbdevice-ros/qb_device_srvs/srv/Trigger.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qb_device_srvs/cmake" TYPE FILE FILES "/home/iclab/softhand_ros/build/qbdevice-ros/qb_device_srvs/catkin_generated/installspace/qb_device_srvs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/iclab/softhand_ros/devel/include/qb_device_srvs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/iclab/softhand_ros/devel/share/roseus/ros/qb_device_srvs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/iclab/softhand_ros/devel/share/common-lisp/ros/qb_device_srvs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/iclab/softhand_ros/devel/share/gennodejs/ros/qb_device_srvs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/iclab/softhand_ros/devel/lib/python2.7/dist-packages/qb_device_srvs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/iclab/softhand_ros/devel/lib/python2.7/dist-packages/qb_device_srvs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/iclab/softhand_ros/build/qbdevice-ros/qb_device_srvs/catkin_generated/installspace/qb_device_srvs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qb_device_srvs/cmake" TYPE FILE FILES "/home/iclab/softhand_ros/build/qbdevice-ros/qb_device_srvs/catkin_generated/installspace/qb_device_srvs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qb_device_srvs/cmake" TYPE FILE FILES
    "/home/iclab/softhand_ros/build/qbdevice-ros/qb_device_srvs/catkin_generated/installspace/qb_device_srvsConfig.cmake"
    "/home/iclab/softhand_ros/build/qbdevice-ros/qb_device_srvs/catkin_generated/installspace/qb_device_srvsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qb_device_srvs" TYPE FILE FILES "/home/iclab/softhand_ros/src/qbdevice-ros/qb_device_srvs/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qb_device_srvs" TYPE DIRECTORY FILES "/home/iclab/softhand_ros/src/qbdevice-ros/qb_device_srvs/include/qb_device_srvs/")
endif()

