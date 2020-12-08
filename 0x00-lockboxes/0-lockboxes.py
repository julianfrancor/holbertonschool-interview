#!/usr/bin/env python3

def canUnlockAll(boxes):

  keys = []
  total_boxes = len(boxes)
  flag = True

  # for box in boxes:
  #   for key in box:
  #     keys.append(key)
  
  for i in range(0, total_boxes - 1):
    if (i + 1) in boxes[i]:
      # print(i + 1)
      # print(boxes[i])
      continue
    else:
      flag = False

  return flag