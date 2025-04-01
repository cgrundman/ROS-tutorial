#!/usr/bin/env python

import rospy
from service_pkg.srv import addition, additionResponse

def server_cb(req):
    return additionResponse(req.a + req.b)    

if __name__ == "__main__":
    rospy.init_node('add_two_ints_server')
    s = rospy.Service('add_two_ints', addition, server_cb)
    rospy.spin()