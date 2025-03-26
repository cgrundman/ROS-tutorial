#!/usr/bin/env python 
from std_srvs.srv import Empty,EmptyResponse
import rospy

def empty_response_cb(req):
    print("Just a service")
    return EmptyResponse()

if __name__ == "__main__":
    rospy.logwarn("Starting Empty Server")
    rospy.init_node('empty_server_service')
    s = rospy.Service('print_service', Empty, empty_response_cb)
    rospy.spin()