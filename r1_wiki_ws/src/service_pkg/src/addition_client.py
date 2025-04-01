#!/usr/bin/env python

import sys
import rospy

from service_pkg.srv import addition, additionResponse

def add_two_ints_client(x, y):
    rospy.wait_for_service('add_two_ints')
    add_two_inits = rospy.ServiceProxy('add_two_inits', addition)
    resp1 = add_two_inits(x, y)
    print(resp1.result)

if __name__ == "__main__":
    x = int(sys.argv[1])
    y = int(sys.argv[2])
    add_two_ints_client(x, y)