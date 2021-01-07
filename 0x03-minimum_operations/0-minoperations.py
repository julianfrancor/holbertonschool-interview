#!/usr/bin/python3


"""
method that calculates the fewest number of
operations needed to result in exactly n H
characters in the file.
"""


def minOperations(n):
    """
    method that calculates the fewest
    number of operations needed to result
    in exactly n H characters in the file.
    """
    if n <= 1:
        return count
    count = 2
    chars = 2
    aux_copy = 1

    while chars < n:
        if n % chars == 0:
            aux_copy = chars
            count += 1
        chars += aux_copy
        count += 1
    return count
