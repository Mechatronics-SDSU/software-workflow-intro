import rclpy
import time
from rclpy.node import Node
from std_msgs.msg import Int64

class UnixEpochTimePublisher(Node):

    def __init__(self):
        super().__init__('unix_epoch_time_publisher')
        self.publisher_ = self.create_publisher(Int64, 'unix_epoch_time', 10)
        timer_period = 5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        # Get the current unix epoch time
        current_time = int(time.time())
        # Publish the current unix epoch time
        msg = Int64()
        msg.data = current_time
        self.publisher_.publish(msg)
        self.get_logger().info('Published unix epoch time: %d' % current_time)

def main(args=None):
    rclpy.init(args=args)
    unix_epoch_time_publisher = UnixEpochTimePublisher()
    rclpy.spin(unix_epoch_time_publisher)
    unix_epoch_time_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

