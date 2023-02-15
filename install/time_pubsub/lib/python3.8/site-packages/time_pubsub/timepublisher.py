"""This class works in tandem with timesubscriber. It generates the unix epoch time, publishing it to a topic.
    it also accepts and prints inputs from another topic, which timesubscriber publishes to.
"""
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import time

class TimePublisher(Node):

    def __init__(self) -> None:
        super().__init__('time_publisher')
        self.publisher_ = self.create_publisher(String, 'epoch_time', 10)
        timer_period = 5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.subscription = self.create_subscription(
            String,
            'standard_time',
            self.listener_callback,
            10)

    def timer_callback(self) -> None:
        """publishes the unix epoch time to the topic 'epoch_time'
        """
        msg = String()
        msg.data = str(int(time.time()))
        self.publisher_.publish(msg)
        self.get_logger().info('Unix Epoch Time: "%s"' % msg.data)

    def listener_callback(self, reply) -> None:
        """prints from 'standard_time'
        """
        self.get_logger().info('Standard Time: "%s"\n' % reply.data)

def main(args=None) -> None:
    """Initializes ROS and TimePublisher()
    """
    rclpy.init(args=args)

    time_publisher = TimePublisher()

    rclpy.spin(time_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    time_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
