#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64


class NumberCounterNode(Node):

    def __init__(self):
        super().__init__("number_counter")
        self.number_sum = Int64()
        self.number_sum.data = 0
        self.subscriber_ = self.create_subscription(
            Int64, "number", self.callback_number, 10)
        self.publisher_ = self.create_publisher(Int64, "number_count", 10)
        self.get_logger().info("Number Counter has been started.")
    
    def callback_number(self, msg: Int64):
        self.number_sum.data += msg.data
        self.publisher_.publish(self.number_sum)
        


def main(args=None):
    rclpy.init(args=args)
    node = NumberCounterNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
