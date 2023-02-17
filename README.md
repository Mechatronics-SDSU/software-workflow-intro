# Introduction
Hello, my name is Aeron Flores and I feel accomplished to have finished this project. I look forward to more challenges in Mechatronics like this project. I am excited to meet all the members of Mechatronics and meet new friends.

## Introduction
The project is in the workspace IntroWorkSpaceAeronFlores. Inside is the publisher "timepublisher" and subscriber "time_subscriber". There is also the package "custom_interfaces" which contains the srv and msg files for the publisher and subscriber to interact with and talk to each other. The timepublisher and time_subscriber should talk to each other and output as well as read.

### How to use project
1. First, source the IntroWorkSpaceAeronFlores by typing in command "cd ~/IntroWorkSpaceAeronFlores".
2. Build custom_interfaces by calling command "colcon build --packages-select custom_interfaces".
3. Build timepublisher by calling command "colcon build --packages-select timepublisher".
4. Build time_subscriber by calling command "colcon build --packages-select time_subscriber".
5. Open a new terminal to run timepublisher and run command "source install/setup.bash" and then, "source /opt/ros/foxy/setup.bash". After that, enter the command ros2 run timepublisher date_publisher.
6. Open another terminal to run time_subscriber and run command "source install/setup.bash" and then, "source /opt/ros/foxy/setup.bash". After that, enter the command ros2 run time_subscriber datesubscriber.

### The nodes are talking to each other
The timepublisher now sends the unix epoch time to time_subscriber and time_subscriber sends readable dates to timepublisher.
