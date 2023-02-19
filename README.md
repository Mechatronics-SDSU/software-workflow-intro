
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

This is a Python program that creates a ROS2 node that periodically publishes the current Unix epoch time.

Here's a detailed explanation of what the code is doing:

    Importing necessary modules and packages:

    rclpy is a Python package for using ROS2 in Python.
    time is a standard Python library for handling time-related operations.
    Node is a class from rclpy.node module for creating a ROS2 node.
    String is a message type from std_msgs.msg module that we will be publishing.

    Creating a class UnixEpochTime that inherits from Node class:

    The __init__ method initializes the node and creates a publisher to publish the current Unix epoch time.
    The timer_period variable sets the time interval between successive calls to the timer_callback() method.
    The timer_callback() method gets the current Unix epoch time and publishes it as a String message. It also logs the message to the console.

    Defining a main function:

    rclpy.init(args=args) initializes the ROS2 client library.
    unix_epoch_time = UnixEpochTime() creates an instance of the UnixEpochTime class.
    rclpy.spin(unix_epoch_time) starts spinning the ROS2 node to handle callbacks.
    unix_epoch_time.destroy_node() destroys the node and its associated resources.
    rclpy.shutdown() shuts down the ROS2 client library.

    Running the main function if the Python script is being executed directly (i.e., not imported as a module).

In summary, this program creates a ROS2 node that periodically publishes the current Unix epoch time as a string message on a specified topic. The node is implemented as a class, and the rclpy library is used to manage the ROS2-related functionality.

### Subscriber
This code defines a ROS2 subscriber node that listens to a topic called "unix_epoch_time" which should publish messages of type Int64. When a message is received, the callback function callback() is executed, which converts the unix epoch time (a timestamp measured in seconds since January 1, 1970) to a human-readable date string of the format "YYYY-MM-DD HH:MM:SS". The human-readable date string is then published to another topic called "human_readable_date" as a message of type String. Below is more detailed explanation of the code:
    Creating a class HumanReadableDate that inherits from Node class:

    The __init__ method initializes the node and creates a subscription to the 'current_unix_epoch_time' topic with a callback method listener_callback.
    The listener_callback method gets the received message, extracts the seconds and nanoseconds from the message data, and converts them to a Unix epoch time value.
    It then converts the Unix epoch time value to a datetime object and converts the datetime object to a human-readable date string.
    The date string is logged to the console.

    Defining a main function:

    rclpy.init(args=args) initializes the ROS2 client library.
    human_readable_date = HumanReadableDate() creates an instance of the HumanReadableDate class.
    rclpy.spin(human_readable_date) starts spinning the ROS2 node to handle callbacks.
    human_readable_date.destroy_node() destroys the node and its associated resources.
    rclpy.shutdown() shuts down the ROS2 client library.

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
Note: omit the ".py" after the publisher/subscriber file name 
Please save them once you're done editing

## Code (time to run it)
In a new terminal, type ```source /opt/ros/foxy/setup.bash``` to source the environment so you can use ros2 commands.

Then type ```colcon build --packages-select <package_name>``` (in root workspace you previously created)

Open two new terminals, go into your works space through this command ```cd <your_workspace>``` then type this code in both terminals: ```install/setup.bash```

When the colon building proccess is done, in one terminal, type
```ros2 run py_pubsub unix_epoch_time_publisher```

In the other one, copy this line
```ros2 run py_pubsub unix_epoch_time_subscriber```

**In this case, 'py_pubsub' is the package name, and 'unix_epoch_time_publisher/subscriber' are the file names

You're all done. 


