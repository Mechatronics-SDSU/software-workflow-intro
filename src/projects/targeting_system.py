"""
targetLock function calls to open a webcam and search for a given target name. When the target enters into the
weapons hitbox, the targetLock function returns 1.  An escape from the targetLock will return a 0 value.

The function has the ability to modify the weapon hitbox location and desired target name from main.

NEED TO INCLUDE:
 - yolov3.weights found at https://pjreddie.com/media/files/yolov3.weights
 - yolov3-320 cfg found at https://github.com/pjreddie/darknet/blob/master/cfg/yolov3.cfg
 - coco.names found at https://github.com/pjreddie/darknet/blob/master/data/coco.names

1. Download weights, cfg file, and coco.names
2. Move files into program file location
3. Run program
"""
import cv2
import numpy as np

# Load Yolo model
net = cv2.dnn.readNet('yolov3.weights', 'yolov3.cfg')
#net = cv2.dnn.readNet('yolov3-tiny.weights','yolov3-tiny.cfg')
net.setPreferableBackend(cv2.dnn.DNN_BACKEND_CUDA)
net.setPreferableTarget(cv2.dnn.DNN_TARGET_CUDA)

'''
default parameters top left x,y and bottom right x,y of weapon's hitbox are the middle of a 720p webcam
'''


def main(top_left_x=300, top_left_y=200, bottom_right_x=340, bottom_right_y=240, target_name='cell phone') -> int:
    # net = cv2.dnn.readNet('tiny-yolo.weights','yolov3-tiny.cfg')
    classes = []
    with open("coco.names", "r") as f:
        classes = [line.strip() for line in f.readlines()]

    font = cv2.FONT_HERSHEY_PLAIN
    colors = np.random.uniform(0, 255, size=(len(classes), 3))
    layer_names = net.getLayerNames()
    outputLayers = [layer_names[i[0] - 1] for i in net.getUnconnectedOutLayers()]
    cap = cv2.VideoCapture(0)
    # width = cap.get(cv2.CAP_PROP_FRAME_WIDTH)
    # print('Width: ', width)
    # height = cap.get(cv2.CAP_PROP_FRAME_HEIGHT)
    # print('Height: ', height)

    while True:
        _, frame = cap.read()
        #frame = cv2.resize(frame, (224, 224))
        # Get dimensions of webcam image
        height, width, channels = frame.shape

        # Create blob frames for image processing and object detection
        # Blob sizes (320,320), (416,416), (600,600).  Larger size = more accurate & slower
        blob = cv2.dnn.blobFromImage(frame, 0.00392, (224, 224), (0, 0, 0), True, crop=False)

        # Feed blob frames into net
        net.setInput(blob)
        outs = net.forward(outputLayers)

        class_ids = []
        confidences = []
        boxes = []

        # Run through objects detected by yolo and store them in memory
        for out in outs:
            for detection in out:
                scores = detection[5:]
                class_id = np.argmax(scores)
                confidence = scores[class_id]

                if confidence > 0.2:
                    # Finds center of our object
                    center_x = int(detection[0] * width)
                    center_y = int(detection[1] * height)

                    # Finds width and height of object
                    object_w = int(detection[2] * width)
                    object_h = int(detection[3] * height)

                    # Creates points on frame for top left of object bounding box
                    object_x = int(center_x - object_w / 2)
                    object_y = int(center_y - object_h / 2)

                    # print("Target x: ", x)
                    # print("Target y: ", y)
                    boxes.append([object_x, object_y, object_w, object_h])
                    confidences.append(float(confidence))
                    class_ids.append(class_id)

        indexes = cv2.dnn.NMSBoxes(boxes, confidences, 0.4, 0.6)

        # call targeting system
        targetingSystem(top_left_x=top_left_x, top_left_y=top_left_y, bottom_right_x=bottom_right_x,
                        bottom_right_y=bottom_right_y, boxes=boxes, indexes=indexes, classes=classes,
                        target_name=target_name, frame=frame, colors=colors, class_ids=class_ids,
                        font=font)

        # Weapon hitbox
        start_pt = (top_left_x, top_left_y)
        end_pt = (bottom_right_x, bottom_right_y)
        color = (255, 255, 0)
        thickness = 2

        # Shows the weapon hitbox and webcam feed
        cv2.rectangle(frame, start_pt, end_pt, color, thickness)
        cv2.imshow('frame', frame)

        # No target/close window by pressing 'q' on keyboard
        if cv2.waitKey(1) == ord('q'):
            # print('No target lock.  Exiting program.')
            return 0


def targetingSystem(top_left_x, top_left_y, bottom_right_x, bottom_right_y,
                    boxes, indexes, classes, target_name, frame, colors, class_ids, font) -> int:
    """
    Target locking function.  If the weapon system hitbox is within the bounding box of the object : weapons fire
    We declare which object we are tracking in main.  Default is a cell phone.
    """

    # Get information from each of our objects
    for i in range(len(boxes)):
        if i in indexes:
            target_x, target_y, target_w, target_h = boxes[i]
            label = str(classes[class_ids[i]])
            color = colors[class_ids[i]]

            # Only print box of our desired object
            if label == str(target_name):
                cv2.rectangle(frame, (target_x, target_y), (target_x + target_w,
                                                            target_y + target_h), color, 2)
                cv2.putText(frame, label, (target_x, target_y + 30), font, 1, (255, 255, 255), 2)

                # Check if weapon hitbox is within target bounding box
                if top_left_x > target_x and top_left_y > target_y:
                    if bottom_right_x < target_x + target_w and bottom_right_y < target_y + target_h:
                        # print("Target lock")
                        return 1

    # No target or hitbox not within bounding box
    else:
        # print("No lock")
        return 0


if __name__ == "__main__":
    main()
