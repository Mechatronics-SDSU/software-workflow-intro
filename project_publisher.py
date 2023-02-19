import rclpy
import time
from rclpy.node import Node
from std_msgs.msg import String

class UnixEpochTime(Node):
    def __init__(self):
        super().__init__('unix_epoch_time')
        self.publisher_ = self.create_publisher(String, 'current_unix_epoch_time', 10)
        timer_period = 5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        date = int(time.time_ns())
        msg = String()
        msg.data = 'Current unix epoch time: %d.%09d' % (date // 10**9, date % 10**9)
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1

def main(args=None):
    rclpy.init(args=args)
    unix_epoch_time = UnixEpochTime()
    rclpy.spin(unix_epoch_time)
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    unix_epoch_time.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
