import cv2
import time

#Assigning device's first (only) camera stream is directed to variable.
cameraStream = cv2.VideoCapture(0)

if (cameraStream.isOpened() == False):
    print("Error opening device's camera.")

# Object detection from stable camera.
object_detector = cv2.createBackgroundSubtractorMOG2(history=100, varThreshold=80)

new_frame_time = 0
prev_frame_time = 0
fps = 0

while (cameraStream.isOpened()):
    rec, fps = cameraStream.read()
    gray = fps

    height, width, _ = fps.shape
    interestRegion = fps[0: height,0: width]

    #Object detection stream to mark tracking into objects tracking.
    mask = object_detector.apply(fps)

    #All grey levels of 254 and below are being ignored.
    _, mask = cv2.threshold(mask, 254, 255, cv2.THRESH_BINARY)

    #Contours from stream are being located.
    contours, _ = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    for cnt in contours:

        area = cv2.contourArea(cnt)
        if area > 100:

            #Rectangle ro frame objects from stream are being applied and assigned area of focus.
            x, y, width, height = cv2.boundingRect(cnt)
            cv2.rectangle(interestRegion, (x,y), (x + width, y + height), (0, 255, 0), 3)

    font = cv2.FONT_HERSHEY_SIMPLEX

    new_frame_time = time.time()
    fps = 1/(new_frame_time - prev_frame_time)
    prev_frame_time = time.time()

    fps = int(fps)
    fps = str(fps)

    cv2.putText(gray, fps, (7,70), font, 3, (255,0,0), 3, cv2.LINE_AA)
    cv2.imshow('Mask', mask)
    cv2.imshow('interestRegion', interestRegion)

    if cv2.waitKey(1) & 0xFF == ord("q"):
        break
cameraStream.release()
cv2.destroyAllWindows()