## Intro ##

Hello! This is my intro assignment for the mechantronix team. Not really sure the exact procedure here but I figured I'd introduce myself. My name's Conner and I am a computer science major at SDSU. I really like programming so I wanted to join this club and actually do something useful with coding. Other than coding I enjoy playing music and going on walks. I also like to study languages sometimes.

I wrote my project in C++ because I really don't like python syntax but I mean I can write in python if you need me to haha. I have proof on my github that I can write python. github.com/Repo-Factory

### Assignment Description ###

In my project I have 3 packages. I had to read A LOT about this ROS2 to get this to work and was banging my head against the wall all day but it does work. I put a screenshot png in my project named EpochToHumanTimeScreenshot. 

I'm not sure if it's the optimal solution but the assignment has a timing aspect and a call/response aspect so I decided that I would need to conform to some kind of publisher/subscriber model and a client/server model simultaneously. Not sure if that's the best way but it's what I came up with haha.

So package1 is the publisher/client. Package2 is the subscriber/service. And package3 has my custom types that I built (msg and srv). msg is of int64 type (epoch time) and the srv request is int64 (epoch time) while the response is a string (human time)

So basically from the instructions:

1. Node1(Publisher)'s constructor has a timer object that is binded to my timer callback function. This function sends Node2 the epoch time every 5 seconds as specified (using std::time(0)).
2. Then Node2 has a topic callback function that simply prints the epoch time.

This wasn't that bad. The tricky part was integrating the server client to accomplish the next part.

So what I didn't mention above is that Node1 (publisher) also sends a request to Node2 for the conversion of the epoch time.

3. Node2 has a service that is bound to the send_response_message function which calls a conversion function (uses iomanip put_time formatting to format the date, this returns a std::_Put_time<char> struct so i threw that into an ostringstream and used .str() to get the message into string format) which turns the number of seconds (epoch time) into a readable string. 

4. Meanwhile Node 1 is waiting for the async response and when Node2 sends back the string, Node1 prints the human readable date (response.get()->humantime).

This is in a loop because the timer object calls it's callback function every 5 seconds. The publisher/client (I also called it talker to refer to both) main just spins the PublisherClient node which starts the timer. The listener (subscriber/server) simply responds whenever that callback function is called. When the message is being returned from Node2, the listener waits spins up another node to wait for the response.

### How to Use ###

Clone the project using

    https://github.com/Repo-Factory/MechatronixIntroProject.git


As mentioned, the project has two ROS packages. If these need to be rebuild for whatever reason you can use these commands:

Publisher/Client:

    colcon build --packages-select package1

Subscriber/Service:

    colcon build --packages-select package2

When these are built, you can run them in two separate terminals using these commands (Make sure to source with . install/setup.bash first):

    ros2 run package1 talker

and

    ros2 run package2 listener

From there you will see the two packages and nodes communicating with each other.

### Navigating ###

The .vscode, build, install, and log files can mainly be ignored.

In src you will find the 3 packages I described above. package1 and package2 have src folders that contain the cpp source code for the two nodes. time_types will include the msg and srv folders needed for custom types in ROS2. Each package has its dependencies listed in package.xml as well as the make files.

EpochToHumanTimeScreenshot.png is a picture of the output of the two nodes working side by side (hit download in after clicking on it because the magnification will cut off the majority of the picture).