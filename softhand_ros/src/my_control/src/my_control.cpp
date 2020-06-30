#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include <sstream>
#include <regex>
#include <mutex>
#include<iostream>
using namespace std;
#include <control_msgs/FollowJointTrajectoryAction.h>

float controll_factor=0;
void chatterCallback(const std_msgs::Float64::ConstPtr& msg)
{
  controll_factor=msg->data;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");
  ros::NodeHandle nl;
  ros::Subscriber sub = nl.subscribe("chatter", 1000, chatterCallback);

  ros::init(argc, argv, "talker");
  ros::NodeHandle n;

  ros::Publisher chatter_pub = n.advertise<trajectory_msgs::JointTrajectory>("/qbhand1/control/qbhand1_synergy_trajectory_controller/command", 1000);

  ros::Rate loop_rate(10);

  
  while (ros::ok())
  {
        
    trajectory_msgs::JointTrajectory msg;
    msg.joint_names.push_back("qbhand1_synergy_joint");
    
    trajectory_msgs::JointTrajectoryPoint point;
    point.positions.clear();
    point.velocities.clear();
    point.accelerations.clear();
    
    ROS_INFO("controll_factor %f", controll_factor);
    point.positions.push_back(controll_factor);
    point.time_from_start = ros::Duration(0.2);

    msg.points.push_back(point);

    chatter_pub.publish(msg);

    

    ros::spinOnce();

    loop_rate.sleep();
    
  }


  return 0;
}