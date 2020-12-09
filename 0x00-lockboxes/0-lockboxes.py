#!/usr/bin/env python3

def canUnlockAll(boxes):

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
