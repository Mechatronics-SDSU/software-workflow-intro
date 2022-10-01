import numpy as np
import cv2
import time

def webcam_with_fps():
    """Displays webcam output with fps.
    """
    
    webcam = cv2.VideoCapture(0)
    
    previous_time = 0
    current_time = 0
    
    while(webcam.isOpened()):

        frame_success, frame = webcam.read()

        if not frame_success:
            break
    
        video_output = frame
        video_output = cv2.resize(video_output, (500, 300))

        font = cv2.FONT_HERSHEY_SIMPLEX

        current_time = time.time()
        fps = 1 / (current_time - previous_time)
        previous_time = current_time
    
        fps = str(int(fps))
    
        cv2.putText(video_output, fps, (7, 70), font, 3, (50, 50, 50), 3, cv2.LINE_AA)
    
        cv2.imshow('frame', video_output)
    
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    
    webcam.release()
    cv2.destroyAllWindows()

webcam_with_fps()