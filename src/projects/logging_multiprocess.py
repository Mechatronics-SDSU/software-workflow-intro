"""
PROJECT: Logging system with multiprocessing
SDSU Mechatronics / Anthony Norderhaug / @ants on Discord
"""

import logging
import concurrent.futures

# FORMAT: timestamp : processID : message
file_handler = logging.FileHandler('issues.log')
file_handler.setFormatter(logging.Formatter('%(asctime)s:%(processName)s:%(message)s'))

# default level: 3, WARNING
logger = logging.getLogger(__name__)
logger.addHandler(file_handler)


def log_errors(error_msgs: any):
    """
    This function takes in either a String, or List of String. Creates multiple processes for input
    If argument is not List, it is converted so to keep executor.map() working
    """
    with concurrent.futures.ProcessPoolExecutor() as executor:
        if not isinstance(error_msgs, list):
            error_msgs = [error_msgs]

        executor.map(log, error_msgs)


def log(msg: str):
    """
    This function takes in String and logs it to 'issues.log'
    """
    logger.warning(msg)
