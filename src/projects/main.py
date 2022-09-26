from imaplib import Time2Internaldate
import cv2
import time
  
vid = cv2.VideoCapture(0)

time1 = 0
time2 = 0
  
while(True):

    ret, frame = vid.read()
    time2 = time.time()
    fps = 1/(time2 - time1)
    time1 = time2

    font = cv2.FONT_HERSHEY_SIMPLEX

    fps = int(fps)

    fps = str(fps)

    cv2.putText(frame, 'FPS: ' + fps, (50, 50), font, .5, (255, 255, 255), 2, cv2.LINE_4)
  
    cv2.imshow('video', frame)
  
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
  
vid.release()
cv2.destroyAllWindows()