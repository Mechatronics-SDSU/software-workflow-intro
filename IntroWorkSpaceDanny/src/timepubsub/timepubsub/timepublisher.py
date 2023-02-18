import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import time

class MinimalPublisher(Node):

    def __init__(self) -> None:
        super().__init__('timepublisher')
        self.publisher_ = self.create_publisher(String, 'epoch_time', 10)
        timer_period = 5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.subscription = self.create_subscription(
            String,
            'date_time',
            self.listener_callback,
            10)

    def timer_callback(self) -> None:
        msg = String()
        msg.data = str(int(time.time()))
        self.publisher_.publish(msg)
        self.get_logger().info('Unix Epoch Time: "%s"' % msg.data)

    def listener_callback(self, respond) -> None:
        self.get_logger().info('Real Date Time: "%s"\n' % respond.data)

def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
