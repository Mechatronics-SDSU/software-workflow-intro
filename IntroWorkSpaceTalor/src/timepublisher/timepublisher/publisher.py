from interfaces.srv import Humantime
from interfaces.msg import Unixtime
import datetime
import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(Humantime, 'UnixToHuman', self.UnixToHuman)
    
    def UnixToHuman(self, request, response):
        #get request from client, then convert sent Unix time into human readable time eg. 2023-02-14 17:45:55.
        response.humantime = datetime.datetime.utcfromtimestamp(request.unixtime).strftime('%Y-%m-%d %H:%M:%S')
        self.get_logger().info('Incoming request\nUnixtime: %d' % (request.unixtime))
        #then send the converted time back to client
        return response


def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
