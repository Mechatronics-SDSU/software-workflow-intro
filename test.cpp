#include <ctime>
#include <unistd.h>
#include <iostream>
#include <chrono>
#include <iomanip>


long UnixEpochTime() 
  {
     return (long)std::time(0); //Returns UTC in Seconds
  }

std::_Put_Time<char> HumanTime(std::time_t unixEpochTime) {
    std::_Put_time<char> time = std::put_time(std::localtime(&unixEpochTime), "%D %H:%M");
    return time;
}


int main()
{
    while (true) {
    std::time_t unixEpochTime = UnixEpochTime();
    std::cout << unixEpochTime << std::endl;
    HumanTime(unixEpochTime);
    usleep(5000000);
    }
    return 0;
}


/**Node 1 is publisher and client

1. Every 5 seconds, publisher component gives time. The client will request the translation of that time 

4. When the client hears back from the service, it will print what it wanted


Node 2 is subscriber and service

2. When subscriber recieves time, it will print out the UNIX time (done)

3. Then the server will response to what it was waiting for which was the UNIX time, and it will convert it to
a human readable time to send back to client.

*/