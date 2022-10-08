import cv2
import time
""" """

if __name__ == '__main__':
    video = cv2.VideoCapture(0) # sets which camera to use for video
    num_frame = 60
    print("Captures " + str(num_frame) + " frames")
    start = time.time() #Current UTC time in seconds
    for i in range(num_frame):
        ret, frame = video.read() # Captures video
    end = time.time()
    seconds = end-start # Finds total time
    print ("Time: " + str(seconds) + " seconds")
    fps = num_frame/seconds
    print("FPS: " + str(fps))
    video.release()