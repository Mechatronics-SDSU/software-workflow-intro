# Remington's Software Intro Project
Learn to use GitHub, Python, and the Mechatronics team's workflow!
## How to use

#### First, in the root of the workspace, build the package
colcon build --packages-select publisher_subscriber_pkg

#### Then, open two terminals and run these 2 commands in each:
source /opt/ros/foxy/setup.bash

. install/setup.bash

#### Then, start the talker node in one terminal:
ros2 run publisher_subscriber_pkg talker

#### And start the listener node in the other:
ros2 run publisher_subscriber_pkg listener
