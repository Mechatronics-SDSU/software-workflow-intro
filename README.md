# Tyler Schwenk Intro Project
The goal was to make a custom ROS2 workspace with two packages, each with a node.

## Format
The first node, 'timepublisher', will generate the unix epoch time and send it via 'topic1' to the other node, 'timesubscriber' every 5 seconds. The 'timesubscriber' prints the recieved time, then converts that time into MM/DD/YYYY HH:mm:ss format before sending it back to 'timepublisher' via 'topic2'. Finally, on recieveing the new time information, 'timepublisher' will print the time in that format

## Execution
Begin by creating the package 'timepublisher' in the src folder of your workspace via the command:

```ros2 pkg create --build-type ament_python timepublisher```

Then in the root of the workspace build the package with:

```colcon build --packages-select timepublisher```

Then open two new terminals and source the setup files:

```. install/setup.bash```

Finally, run the talker in one terminal then the listener in another:

```ros2 run timepublisher talker```

```ros2 run timepublisher listener```
