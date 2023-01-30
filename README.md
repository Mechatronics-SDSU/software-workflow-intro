## Intro ##

Hello! This is my intro assignment for the mechantronix time. Not really sure the exact procedure here but I figured I'd introduce myself. My name's Conner and I am a computer science major at SDSU. I really like programming so I wanted to join this club and actually do something useful with coding. 

I wrote my project in C++ because I really don't like python syntax but I mean I can write in python if you need me too haha. I have proof on my github that I can write python. github.com/Repo-Factory

### Assignment Description ###

In my project I have 3 packages. I had to read ALOT about this ROS2 to get this to work and was banging my head against the wall all day but it does work. I'll put a screenshot right here.

I'm not sure if it's the optimal solution but the assignment has a timing aspect and a call/response aspect so I decided that I would need to conform to some kind of publisher/subscriber model and a client/server model. Not sure if that's the best way but it's what I came up with haha.

So package1 is the publisher/client. Package2 is the subscriber/service. And package3 has my custom types that I built (msg and srv). msg is of int64 type (epoch time) and the srv request is int64 (epoch time) while the response is a string (human time)

So basically from the instructions:

1. Node1(Publisher)'s constructor has a timer object that is binded to my timer callback function. This function sends Node2 the epoch time every 5 seconds as specified (using std::time(0)).
2. Then Node2 has a topic callback function that simply prints the epoch time.

This wasn't that bad. The tricky part was integrating the server client to accomplish the next part.

So what I didn't mention above is that Node1 (publisher) also sends a request to Node2 for the conversion of the epoch time.

3. Node2 has a service that is bound to the send_response_message function which calls a conversion function (uses iomanip put_time formatting to format the date, this returns a std::_Put_time<char> struct so i threw that into an ostringstream and used .str() to get the message into string format) which turns the number of seconds (epoch time) into a readable string. 

4. Meanwhile Node 1 is waiting for the async response and when Node2 sends back the string, Node1 prints the human readable date (response.get()).

This is in a loop because the timer object calls it's callback function every 5 seconds. The publisher/client (I also called it talker to refer to both) main just spins the PublisherClient node which starts the timer. The listener (subscriber/server) simply responds whenever that callback function is called. When the message is being returned from Node2, the listener waits spins up another node to wait for the response.