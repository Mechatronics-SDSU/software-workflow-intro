"""
This file is used to simulate multiple processes using logging_multiprocess.py with
both single and multiple inputs.

SDSU Mechatronics / Anthony Norderhaug / 9-5-2021 / @ants on discord
"""

import concurrent.futures
import logging_multiprocess

# this List of Lists & 1 String represents multiple programs trying to log input varying in size
programs = [['program 1 error a', 'program 1 error b'],
            'program 2 error a',
            ['program 3 error a', 'program 3 error b', 'program 3 error c', 'program 3 error d'],
            ['program 4 error a', 'program 4 error b', 'program 4 error c']]


if __name__ == '__main__':

    # for loop starting processes for each element in List programs
    with concurrent.futures.ProcessPoolExecutor() as executor:
        for errors in programs:
            process = executor.submit(logging_multiprocess.log_errors, errors)


