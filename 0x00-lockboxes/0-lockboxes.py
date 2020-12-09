#!/usr/bin/env python3
"""
  Method to check if a box can be opened or not
"""

def canUnlockAll(boxes):
  """
    canUnlockAll is a method that checks whether
    a box can be opened or not

    Args: boxes -> list of lists
    return:
      True if all the boxes could be opened
      False if all the boxes couldn't be opened
  """
  unlocked = [False] * len(boxes)
  unlocked[0] = True
  keys = []

  for key in boxes[0]:
    keys.append(key)

  for key in keys:
    if ((key < len(boxes)) and (unlocked[key] is False)):
      unlocked[key] = True
      for i in boxes[key]:
        if i not in keys:
          keys.append(i)

  if False in unlocked:
    return False
  else:
    return True
