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
        response.humantime = datetime.datetime.utcfromtimestamp(request.unixtime).strftime('%Y-%m-%d %H:%M:%S')
        self.get_logger().info('Incoming request\nUnixtime: %d' % (request.unixtime))

        return response


def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
