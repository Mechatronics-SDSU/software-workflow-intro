# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
import time
from rclpy.node import Node

from std_msgs.msg import String


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        timer_period = 5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = time.time()
        
        self.subscription = self.create_subscription(
            String,
            'topic_2',
            self.listener_callback,
            10)
        self.subscription 
        

    def timer_callback(self):
        msg = String()
        msg.data = f'{self.i}' 
        
        
        self.publisher_.publish(msg)
        self.get_logger().info(f'Unix Epoch Time: {msg.data}')
        self.i += 1
        
#subscriber start
        	

    def listener_callback(self, reply):
        self.get_logger().info(f'Human Readable Date: {reply.data}') 	
	
		
#subscriber stop


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
