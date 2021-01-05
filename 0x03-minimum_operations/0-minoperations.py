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
    count = 0
    chars = 1
    if n == 0 or n < 0:
        return count

    if n % 2 != 0:
        while chars <= n:
            if chars % 2 != 0:
                aux = chars
                chars += aux
                count += 2
            elif chars % 2 == 0:
                chars += aux
                count += 1
            if chars >= n:
                return count
    else:
        while chars <= n:
            if chars % 2 != 0:
                aux = chars
                chars += aux
                count += 2
            elif chars % 2 == 0:
                chars += aux
                count += 1
            if chars >= n:
                count -= 1
                return count
