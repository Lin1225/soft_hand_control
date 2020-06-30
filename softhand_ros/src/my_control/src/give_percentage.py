#!/usr/bin/env python
# license removed for brevity
import rospy
from std_msgs.msg import Float64
#from common_msgs import trajectory_msgs
def talker():
    pub = rospy.Publisher('chatter', Float64, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(10) # 10hz
    while not rospy.is_shutdown():
        controll_factor=""
        controll_factor=float(input("enter a num "))

        rospy.loginfo(controll_factor)
        pub.publish(controll_factor)
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass