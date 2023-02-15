"""This class works in tandem with timepublisher. It accepts and prints the unix epoch time from the topic.
    It then converts it to standard time, publishing it to another topic
"""

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import time


class TimeSubscriber(Node):  
    def __init__(self) -> None:
        """Creates a subscriber function, as well as a publisher for the converted standard time
        """
        super().__init__('time_subscriber')
        self.subscription = self.create_subscription(
            String,
            'epoch_time',
            self.listener_callback,
            10)
        
        self.publisher = self.create_publisher(
            String,
            'standard_time',
            10)

    def listener_callback(self, msg)-> None:
        """Prints the Unix Epoch Time from the topic. Calls convert_time, then publishes the output.
        """
        self.get_logger().info('Unix Epoch Time: "%s"' % msg.data)
        reply = String()
        reply.data = self.convert_time(msg.data)
        self.publisher.publish(reply)
        

    def convert_time(self, unix_epoch_time) -> str:
        """formats the unix epoch time. Returns it as a str.
        """
        local_time = time.localtime(float(unix_epoch_time))
        formatted_time = time.strftime('%Y-%m-%d %H:%M:%S', local_time)
        return formatted_time

def main(args=None) -> None:
    """Initializes ROS and TimeSubScriber()
    """
    rclpy.init(args=args)

    time_subscriber = TimeSubscriber()

    rclpy.spin(time_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    time_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
