import rclpy
import time

from rclpy.node import Node

from std_msgs.msg import String


class UnixEpochTimePublisher(Node):

    def __init__(self):
        super().__init__('unix_epoch_time_publisher')
        self.publisher_ = self.create_publisher(String, 'unix_epoch_time_conversion', 10)
        timer_period = 5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = str(int(time.time()))
        self.publisher_.publish(msg)
        self.get_logger().info('unix epoch time: "%s"' % msg.data)
        self.i += 1


def main(args=None):
    rclpy.init(args=args)

    unix_epoch_time_publisher = UnixEpochTimePublisher()

    rclpy.spin(unix_epoch_time_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    unix_epoch_time_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
