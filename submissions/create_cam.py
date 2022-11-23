import cv2
import time
cap = cv2.VideoCapture(0)
fps_start_time = 0
fps=0
while True :
    rec, frame = cap.read()


    fps_end_time=time.time()
    time_difference = fps_start_time - fps_end_time
    fps=1/(-time_difference)
    fps_start_time=fps_end_time

    fps_text = "FPS for webcam: {:.2F}".format(fps)
    cv2.putText(frame,fps_text,(5,30),cv2.FONT_HERSHEY_COMPLEX,1,(255,0,0),1)
    cv2.imshow("it's morbin time",frame)



    if cv2.waitKey(1) & 0xFF == ord("q"):
        break
cap.release()
