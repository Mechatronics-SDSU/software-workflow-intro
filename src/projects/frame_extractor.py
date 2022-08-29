"""
extract_frames extracts frames from an mp4 file and saves each frame as a png file

1. Call extract_frames, pass file directory parameters
2. Run program
"""
import cv2
import os


# two arguments, read_path and write_path, and no return value, but prints when a frame is read
def extract_frames(mp4_name) -> None:
    """
    This function extract frames from an mp4 file and saves each frame as a png file.

    input params:
    mp4_name = name of the mp4 file

    return: none
    """
    cap = cv2.VideoCapture(mp4_name)
    success, frame = cap.read()
    frame_num = 0

    if success and not os.path.exists('output'):
        os.mkdir('output')
        # save frames
        while success:
            cv2.imwrite('output/_frame%d.png' % frame_num, frame)
            success, frame = cap.read()
            print('Read Frame %d: ' % frame_num, success)
            frame_num += 1
    else:
        print('error: mp4 was not found or the folder "output" is in the way')


if __name__ == "__main__":

    # change file
    file = 'cap.mp4'

    extract_frames(file)
