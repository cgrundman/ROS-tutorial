#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math

class vel_manipulator:

    def __init__(self):
        pub_topic_name ="/turtle1/cmd_vel"
        sub_topic_name ="/turtle1/pose"

        self.pub = rospy.Publisher(pub_topic_name, Twist, queue_size=10)
        self.number_subscriber = rospy.Subscriber(sub_topic_name, Pose, self.pose_callback)
        self.velocity_msg = Twist()

    def pose_callback(self, msg):
        # Left wall
        if (msg.x >= 8 and (msg.theta > (-3 * math.pi / 4) or msg.theta < (3 * math.pi / 4))):
            self.velocity_msg.linear.x = 0.1 # stop
            self.velocity_msg.angular.z = 10
        # Right wall
        elif (msg.x <= 3 and (msg.theta > (-math.pi / 4) or msg.theta < (math.pi / 4))):
            self.velocity_msg.linear.x = 0.1 # stop
            self.velocity_msg.angular.z = 10
        # Top wall
        elif (msg.y >= 8 and (msg.theta > (math.pi / 4) or msg.theta < (3 * math.pi / 4))):
            self.velocity_msg.linear.x = 0.1 # stop
            self.velocity_msg.angular.z = 10
        # Bottom wall
        elif (msg.y <= 3 and (msg.theta > (-3 * math.pi / 4) or msg.theta < (-math.pi / 4))):
            self.velocity_msg.linear.x = 0.1 # stop
            self.velocity_msg.angular.z = 10
        else:
            self.velocity_msg.linear.x = 0.5
            self.velocity_msg.angular.z = 0

        self.pub.publish(self.velocity_msg)

if __name__ == '__main__':
    node_name ="Turtlesim_Saver"
    rospy.init_node(node_name)
    vel_manipulator()
    rospy.spin()