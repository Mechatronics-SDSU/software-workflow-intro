import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import time


class MinimalSubscriber(Node):  
    def __init__(self) -> None:
        super().__init__('timesubscriber')
        self.subscription = self.create_subscription(
            String,
            'epoch_time',
            self.listener_callback,
            10)
        
        self.publisher = self.create_publisher(
            String,
            'date_time',
            10)
            
    def listener_callback(self, msg)-> None:
        self.get_logger().info('Unix Epoch Time: "%s"' % msg.data)
        respond = String()
        respond.data = self.time_converter(msg.data)
        self.publisher.publish(respond)

    def time_converter(self, unix_time) -> str:
    
        real_time = time.localtime(float(unix_time))
        actual_time = time.strftime('%Y-%m-%d %H:%M:%S', real_time)
        
        return actual_time

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
