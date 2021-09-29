"""
extract_frames extracts frames from an mp4 file and saves each frame as a png file

Only the extract_frame function is meant to be imported
"""
import cv2
import os


# two arguments, read_path and write_path, and no return value, but prints when a frame is read
def extract_frames(read_path: str, write_path: str) -> None:
    """
    This function extract frames from an mp4 file and saves each frame as a png file.

    input params:
    read_path = directory of mp4 file
    write_path = directory to store png files

    return: none
    """
    if os.path.exists(write_path):
        # used to avoid overwriting files
        mp4_name = read_path.rpartition('/')[2].rpartition('.mp4')[0]

        # organize a folder for png frames
        new_dir = write_path + mp4_name + '_frames/'
        if not os.path.exists(new_dir):
            os.mkdir(new_dir)
        os.chdir(new_dir)

        cap = cv2.VideoCapture(read_path)
        success, frame = cap.read()
        frame_num = 0
        while success:
            # save frames
            cv2.imwrite(mp4_name + '_frame%d.png' % frame_num, frame)
            success, frame = cap.read()
            print('Read Frame %d: ' % frame_num, success)
            frame_num += 1

        if not success:
            print('mp4 file path not found')
    else:
        print('png write path not found')


if __name__ == "__main__":

    # change directories
    mp4_path = 'C:/Users/jason/Pictures/Camera Roll/cap.mp4'
    png_write_path = 'C:/Users/jason/Pictures/Camera Roll/'

    extract_frames(mp4_path, png_write_path)
