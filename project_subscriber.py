import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64, String
import datetime

class UnixEpochTimeSubscriber(Node):

    def __init__(self):
        super().__init__('unix_epoch_time_subscriber')
        self.subscription = self.create_subscription(
            Int64,
            'unix_epoch_time',
            self.callback,
            10)
        self.publisher_ = self.create_publisher(String, 'human_readable_date', 10)

    def callback(self, msg):
        # Convert the unix epoch time to a human-readable date
        date = datetime.datetime.fromtimestamp(msg.data).strftime('%Y-%m-%d %H:%M:%S')
        # Publish the human-readable date
        msg = String()
        msg.data = date
        self.publisher_.publish(msg)
        self.get_logger().info('Converted unix epoch time to human-readable date: %s' % date)

def main(args=None):
    rclpy.init(args=args)
    unix_epoch_time_subscriber = UnixEpochTimeSubscriber()
    rclpy.spin(unix_epoch_time_subscriber)
    unix_epoch_time_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

