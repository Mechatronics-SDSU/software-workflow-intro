"""A styling guide example using a deque data structure and a python function.
"""
from collections import deque


def peek(input_deque: deque) -> any:
    """Python's collections.deque doesn't have a peek method.
    This functionality is needed for the project later, so it is defined here.
    Deep copy of the deque not needed before passing a deque to this function,
    it will return an unmodified deque.
    :param input_deque: Deque object
    :return: None if Deque object has no entires, rightmost entry in deque
    otherwise
    """
    try:
        ret_val = input_deque.pop()
    except IndexError as e:  # Empty Deque
        print(e)
        return None
    input_deque.append(ret_val)
    return ret_val


if __name__ == '__main__':
    result_deque = deque()
    for i in range(1, 10):  # Generating test data to verify
        result_deque.append(i)

    print(peek(result_deque))
    print(result_deque)
