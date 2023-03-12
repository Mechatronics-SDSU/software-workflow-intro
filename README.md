
# Introduction Project

## Function:
This project's primary purpose is to get two nodes to "communicate" with each other,
which was done through a publisher/subscriber system. In my variation of the project,
my publisher is given the name "talker" while my subscriber was given "listener".
Both of their programs can be found under the src folder that's inside the project's
folder called "cpp_pubsub".

## Initial setup:

All these instructions assume that the computer running these functions have all the
required dependencies that came with the Ros 2 work space.

1) Type in `cd ~/ros2_ws`

Navigate to "ros2_ws" directory.

2) Type in `colcon build --packages-select cpp_pubsub`

Builds the package "cpp_pubsub".



## Getting the two nodes to communicate:

1) In one terminal (T1), type in `. install/setup.bash`

Sources the workspace for this terminal.

2) Type in `ros2 run cpp_pubsub talker` in (T1)

Opens the "talking" terminal which prints out the time in Epoch and sends the
"listener" the time in human-readable format.

3) In another terminal (T2), type in `. install/setup.bash`

Sources the workspace for this terminal again.

4) And type in `ros2 run cpp_pubsub listener` again in (T2)

Opens the "listening" terminal that receives what the publisher has sent it 
and prints out the time in human-readable format.


-----------


The result should show terminal 1, the publisher, stating the following:

`Unix Enpoch Time in seconds: 16785XXXXX`

And terminal 2, the subscriber, the following:

`In human readable time: '53 years : 3 months : 1 weeks : 4 days : 17 hrs : 47 min : 5 secs`

And should be printing out these statements at a rate of 1 transmission / 5 seconds.

