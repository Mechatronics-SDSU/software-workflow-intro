# Introduction
Hello. my name is Alex. I am a freshman computer science major. I have lived in San Diego my entire life. I joined the club because Jai dragged me to a meeting, and I actually really liked it. I'm looking to improve my programming skills and apply them, as well as make tons of friends and just hang out.

# The Intro Project
Going into this project, I had next to no experience with Linux, the terminal, or Github. In addition to learning ROS2, I also had to learn about the workings of those other tools as well. It took me a bit to learn each of them.

## Layout/How it works
The workspace is pretty simple actually. The src folder contains a single package, 'time_pubsub', which contains both the nodes timepublisher and timesubscriber. timepublisher generates the Unix Epoch Time every five seconds, then sends it to the topic 'epoch_time'. timesubscriber recieves it, displays it, converts it to a formatted system local time. It then publishes it to the topic 'formatted_time'. timepublisher is subscribed to that topic, and displays the formatted time in the terminal.

## How to use the program
Clone the branch.
```
git clone --branch aprochazka-dev --single-branch https://github.com/Mechatronics-SDSU/software-workflow-intro.git
```
Source ROS2, then enter the workspace.

Build the packages using:
 ``` 
 colcon build
 ```
source the packages using:
```
. install/setup.bash
```
Run each node in a separate terminal window the commands for each are:
```
ros2 run time_pubsub pub
```
```
ros2 run time_pubsub sub
```
You should now see the publisher terminal displaying both the Unix Epoch Time and a formatted version. The subscriber displays only the Unix Time
