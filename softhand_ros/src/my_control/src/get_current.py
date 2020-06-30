#!/usr/bin/env python

import sys
import rospy
from qb_device_srvs.srv import GetMeasurements

def add_two_ints_client():
    rospy.wait_for_service('/communication_handler/get_measurements')
    
    while not rospy.is_shutdown():
        add_two_ints = rospy.ServiceProxy('/communication_handler/get_measurements', GetMeasurements)
        resp1 = add_two_ints(1,0,False,True,False)
        print(resp1.currents)
        rospy.sleep(0.5)

if __name__ == "__main__":
    add_two_ints_client()
    