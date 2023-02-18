
# ROS2 Foxy Project Introduction
 Hi I'm writing code using ROS2 Foxy to establish publisher/sucsbriber nodes that updates and converts unix epoch time to human readable time every 5 seconds
# Setup
## Required OS
Ubuntu ver 20.04 is needed for this project, either you dual boot or create a virual machine. If latter, download the Ubuntu Desktop ISO file [here](https://releases.ubuntu.com/20.04.5/). Go to this [link](https://ubuntu.com/tutorials/how-to-run-ubuntu-desktop-on-a-virtual-machine-using-virtualbox#1-overview) for more tutorials on how to get started with Ubuntu virtual machine
## Installing ROS2 Foxy
Go through instructions on [docs.ros.org](https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html) to install & set up ROS2 (foxy)
# Project
Here's some basic [tutorials](https://docs.ros.org/en/foxy/Tutorials.html) for the project (Strongly recommend sections [Beginner: CLI Tools](https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools.html) and [Beginner: Client Libraries](https://docs.ros.org/en/foxy/Tutorials/Beginner-Client-Libraries.html)

This project is written in python. Refer to the following [link](https://docs.ros.org/en/foxy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Cpp-Publisher-And-Subscriber.html) for instructions to write in C++.

You would refer to this [page](https://docs.ros.org/en/foxy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html) A LOT while doing the project. This contains all the information necessary for you to write publisher & subscriber for ros2 foxy (Python)
## Overview
The publisher will publish the unix epoch time (a system for representing a point in time as a single number, the number of seconds that have elapsed since January 1, 1970, at 00:00:00 UTC (Coordinated Universal Time)) and updates it every 5 seconds. It will sends the info message to subscriber, which coverts it to human readable time and put on terminal. The process continues until program is terminated (using Ctrl+C). 
### Publisher
You will write the publisher node that gets the current unix epoch time and sends the message to the subscriber. In this case I base the code on this free sample program MinimalSubscriber(). You can install the file by copying this code to the terminal: ```wget https://raw.githubusercontent.com/ros2/examples/foxy/rclpy/topics/minimal_subscriber/examples_rclpy_minimal_subscriber/subscriber_member_function.py```

This code defines a ROS (Robot Operating System) node in Python that publishes the current Unix epoch time to a topic using the std_msgs/Int64 message type.

Here's a breakdown of the code:

    The code starts by importing the necessary modules: rclpy, time, Node from rclpy.node, and Int64 from std_msgs.msg.

    Next, a class called UnixEpochTimePublisher is defined. This class inherits from rclpy.node.Node and defines the behavior of the ROS node.

    In the constructor of the UnixEpochTimePublisher class, a publisher is created that publishes messages of type Int64 to the 'unix_epoch_time' topic. A timer is also created that calls the timer_callback function every 5 seconds.

    The timer_callback function is defined to get the current Unix epoch time using the time.time() function, create a new Int64 message, set its data field to the current time, publish the message, and log a message to the console.

    The main function is defined to initialize the ROS system, create an instance of the UnixEpochTimePublisher class, spin the node to keep it running, destroy the node when it's done, and shut down the ROS system.

    Finally, the main function is called if the script is being run as the main program.

In summary, this code defines a ROS node that publishes the current Unix epoch time to a topic using the std_msgs/Int64 message type, which can be used by other nodes in a ROS system for time synchronization or other purposes.

### Subscriber
This code defines a ROS2 subscriber node that listens to a topic called "unix_epoch_time" which should publish messages of type Int64. When a message is received, the callback function callback() is executed, which converts the unix epoch time (a timestamp measured in seconds since January 1, 1970) to a human-readable date string of the format "YYYY-MM-DD HH:MM:SS". The human-readable date string is then published to another topic called "human_readable_date" as a message of type String.

The class UnixEpochTimeSubscriber inherits from the Node class, which is part of the rclpy package. The Node class provides the basic functionality for creating a ROS2 node, including creating publishers and subscribers, and handling the communication with the ROS2 middleware.

In the __init__ method of the UnixEpochTimeSubscriber class, the subscriber is created using the create_subscription() method of the Node class. This method takes the following arguments:

    the message type (in this case Int64)
    the topic name to subscribe to (unix_epoch_time)
    the callback function to be executed when a message is received (callback)
    the queue size, which determines how many messages can be buffered before the oldest messages are dropped (in this case, 10)

A publisher is also created using the create_publisher() method of the Node class. This method takes the message type (String) and the topic name (human_readable_date) as arguments.

The callback() function is defined to convert the unix epoch time to a human-readable date using the fromtimestamp() and strftime() methods of the datetime module. The resulting human-readable date is then published to the "human_readable_date" topic using the publisher created earlier.

The main() function initializes the ROS2 system using rclpy.init(), creates an instance of the UnixEpochTimeSubscriber class, and enters the ROS2 event loop using rclpy.spin(). The event loop allows the subscriber to receive messages and the publisher to send messages. Finally, the node is destroyed using unix_epoch_time_subscriber.destroy_node(), and the ROS2 system is shutdown using rclpy.shutdown().

### Add Dependencies and Entry Points
Make sure you follow the intructions to set them up correctly, otherwise the colon building proccess would fail (and obviously it will also fail if there're coding errors in your publisher/subscriber nodes, so double check it.

For entry points, this is the format you will follow:

```entry_points={
        'console_scripts': [
                '<publisher_name> = <package_name>.<publisher_file_name>:main',
                '<subscriber_name> = <package_name>.<subscriber_file_name>:main',
        ],
},
```
Please save them once you're done editing

## Code (time to run it)
In a new terminal, type ```source /opt/ros/foxy/setup.bash``` to source the environment so you can use ros2 commands.

Then type ```colcon build --packages-select <package_name>``` (in root workspace you previously created)

Open two new terminals, go into your works space through this command ```cd <your_workspace>``` then type this code in both terminals: ```install/setup.bash```

When the colon building proccess is done, in one terminal, type
```ros2 run py_pubsub unix_epoch_time_publisher```

In the other one, copy this line
```ros2 run py_pubsub unix_epoch_time_subscriber```

You're all done. 


