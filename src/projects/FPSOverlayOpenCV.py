# https://github.com/skvark/opencv-python
# pip install opencv-python will get you numpy and opencv packages
'''
Display Camera with an output of FPS on the display window
Additionally added: output of average fps displayed every 100 frames
'''

# numpy version: 1.23.3
# opencv version: 4.6.0
# time comes prepackaged into most IDES
import numpy as np
import cv2
import time

# print package versions
print(cv2.__version__)
print((np.__version__))


# this function is an example of how time complexity algorithms and functions within the code can lower FPS
# by increasing N from 100 to 1000 you can see a great amount of stress on the program and decrease in FPS
def stress():
    stress = 0
    N = 1000
    for i in range(0, N):
        for j in range(0, N):
            stress += 1


# initializing loop variable
num_frames_calculated = 0

# initialize array that will hold fps values to calculate average
average = [0 for i in range(100)]

# initialize average_fps
average_fps = 0

# capture video from specified device 0(Ususally laptop webcam), 1(plugged in webcam), ... or IP cam URL
cap = cv2.VideoCapture(0)

# capturing each individual frame for fps
num_frames = 1

print("Capturing {0} frames".format(num_frames))

while (cap.isOpened()):

    # start time of one frame to be used to get FPS
    start = time.time()

    # Capture frame-by-frame ret: a boolean of if frame capturing is occuring   frame:video frame data
    ret, frame = cap.read()

    # if video finished or no Video Input
    if not ret:
        raise Exception("No Video Input")
        break

    # duplicating frame data that can be changed without changing the original frame
    stream = frame

    # resize the output window
    stream = cv2.resize(stream, (1000, 600))

    # function to demonstrate how fps can be affected by more complexity occuring on given device or system
    # stress()

    # end time of the same frame called in start frame to be used to get FPS
    end = time.time()

    # seconds past between beginning of frame and end of frame
    seconds = end - start

    # Algorithm to get frames per second
    fps = num_frames / seconds

    # calculating and printing the fps avg
    if fps < 100 and num_frames_calculated < 100:
        average[num_frames_calculated] = (int(fps))
    if num_frames_calculated == 100:
        average_fps = sum(average) / len(average)
        print("Average fps: " + str(int(average_fps)))
        num_frames_calculated = 0
    num_frames_calculated += 1

    # conditional statements applied so that outlier data won't be displayed
    if fps < 100:
        cv2.putText(stream, "FPS: " + str(int(fps)), (50, 50), cv2.FONT_HERSHEY_SIMPLEX, 1.25, (100, 255, 100), 2)
        cv2.putText(stream, "Average FPS: " + str(int(average_fps)), (50, 80), cv2.FONT_HERSHEY_SIMPLEX, 1.25,
                    (100, 255, 100), 2)
    else:
        cv2.putText(stream, "FPS: " + str(int(average_fps)), (50, 50), cv2.FONT_HERSHEY_SIMPLEX, 1.25, (100, 255, 100),
                    2)
        cv2.putText(stream, "Average FPS: " + str(int(average_fps)), (50, 80), cv2.FONT_HERSHEY_SIMPLEX, 1.25,
                    (100, 255, 100), 2)

    # displaying the frame with fps
    cv2.imshow('FPSOverlayInOpencv', stream)


    # press 'q' if you want to exit
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# When done, release the capture
cap.release()
# close windows
cv2.destroyAllWindows()
