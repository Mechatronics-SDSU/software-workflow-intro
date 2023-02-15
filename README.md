### Readme for intro project!
This is Talor Gittin, which you should be able to tell just from the name of the repository alone.
### Steps:
So in order to run the program I have set up, you should clone the repository (duh) and then cd into the right dictonary which should be IntroWorkSpaceTalor.
Then follow these simple steps:
1. Open two windows then in each window follow these steps:

window 1:
1. go to ubuntu command line
2. cd IntroWorkSpaceTalor
3. source install/setup.bash
4. cd src
5. cd timepublisher
6. ros2 run timepublisher service

window 2:
1. go to ubuntu command line
2. cd IntroWorkSpaceTalor
3. source install/setup.bash
4. cd src
5. cd timesubscriber
6. ros2 run timesubscriber client

### What my program does:
The client gets the current Unix time, then using a predefined interface (variable type cast), the client sends this Unix time to a service that converts the Unix time to a human-readable format (e.g., 2023-02-14 17:35:39) and sends back the converted time using the same said interface; after the client, once it receives the converted Unix time, it prints out the converted Unix time.
