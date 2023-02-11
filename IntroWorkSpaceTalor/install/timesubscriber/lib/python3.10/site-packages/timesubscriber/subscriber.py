import sys
import time
from interfaces.srv import Humantime
from interfaces.msg import Unixtime
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(Humantime, 'UnixToHuman')
        while not self.cli.wait_for_service(timeout_sec=4.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Humantime.Request()

    def send_request(self, unixtime):
        self.req.unixtime = unixtime
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)

    minimal_client = MinimalClientAsync()
    while True:
        response = minimal_client.send_request(int(time.time()))

        minimal_client.get_logger().info('Unix to human time: %s' % str(response))
        time.sleep(5)
    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
