"""Styling guide example 4
Fibonacci sequence examples with python to explain function annotation usage.
"""


def fibonacci_wrong(num_a, num_b):
    """
    Calculates the fibonacci sequence to 10 numbers.
    a + b = c, a = b, b = c Are the 3 basic operations.
    :param num_a: the initial a value.
    :param num_b: the initial b value.
    :return: list object with all results.
    """
    ret_val = [num_a, num_b]
    for i in range(2, 10):
        num_c = num_a + num_b
        ret_val.append(num_c)
        num_a = num_b
        num_b = num_c
    return ret_val


def fibonacci_correct(num_a: int, num_b: int) -> list:
    """
    Calculates the fibonacci sequence to 10 numbers.
    a + b = c, a = b, b = c Are the 3 basic operations.
    :param num_a: the initial a value.
    :param num_b: the initial b value.
    :return: list object with all results.
    """
    ret_val = [num_a, num_b]
    for i in range(2, 10):
        num_c = num_a + num_b
        ret_val.append(num_c)
        num_a = num_b
        num_b = num_c
    return ret_val


print(f'First function: {fibonacci_wrong(0, 1)}')
print(f'Second function: {fibonacci_correct(0, 1)}')
