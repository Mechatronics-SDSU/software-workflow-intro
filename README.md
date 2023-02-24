# How to use the Subscriber/Publisher
Open a terminal and source setup.bash.
Do this by changing directories: cd ros2_foxy/install
Then the source command: source setup.bash

Repeat these steps in 2 more terminals

In the first terminal, build a package: colcon build --packages-select py_pubsub

Now in the second terminal, run the publisher file: ros2 run py_pubsub talker
At this point, the publisher will be outputting unix time.

Now in the third terminal, run the subscriber file: ros2 run py_pubsub listener
The subscriber will 'hear' the unix time from the publisher and convert it to a human readable date to then send back to the publisher.
