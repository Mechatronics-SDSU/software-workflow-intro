### Introduce yourself
Hello everyone! My name is Hector Anaya. I'm excited to have finally finished this intro porject. It was a massive struggle, and I can't wait to struggle even more as a part of the mechatronix team.

## How it works
So in this branch you will see a workspace folder called IntroWorkspaceHectorAnaya. Within that workspace's src/ folder you will find three package folders: custom_interfaces, date_publisher, and epoch_publisher. 
As the name implies, custom_interfaces holds the interfaces that the other two packages use to communicate with eachother. It has both srv and msg files, but only the msg files are used.
The other two packages create nodes that publish and subcribe to eachother. The date_publisher package holds the datepublisher.cpp file within its src/ folder. the datepublisher.cpp file creates the node that handles converting epoch time to human readable time. While the epoch_publisher package holds epochpublisher.cpp within its src/ folder. The epochpublisher.cpp creates a node that sends the epoch time in seconds to datepublisher node.