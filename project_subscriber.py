import rclpy
import datetime
from rclpy.node import Node

from std_msgs.msg import String


class HumanReadableDate(Node):

   def __init__(self):
    	super().__init__('human_readable_date')
    	self.subscription = self.create_subscription(
        	String,
        	'current_unix_epoch_time',
        	self.listener_callback,
        	10)
    	self.subscription  # prevent unused variable warning

   def listener_callback(self, msg):
        # Extract seconds and nanoseconds from message data
        seconds_str, nanoseconds_str = msg.data.split('.')
        seconds = int(seconds_str.split()[-1])
        nanoseconds = int(nanoseconds_str)

        # Convert seconds and nanoseconds to Unix epoch time value
        epoch_time_ns = (seconds * 10**9) + nanoseconds

        # Convert epoch time to datetime object
        epoch_time = datetime.datetime.fromtimestamp(epoch_time_ns / 1000000000)

        # Convert datetime object to string with nanosecond precision
        date_str =  epoch_time.strftime('%Y-%m-%d %H:%M:%S.%f')

        self.get_logger().info('Convert unix epoch time to human readable date: "%s"' % date_str)


def main(args=None):
    rclpy.init(args=args)

    human_readable_date = HumanReadableDate()

    rclpy.spin(human_readable_date)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    human_readable_date.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
