#!/usr/bin/python3
def uppercase(str):
    lower_range = range(ord('a'), ord('z') + 1)
    for idx, i in enumerate(str):
        if i in lower_range:
            str[idx] = ord('A') + (ord(i) - ord('a'))
    print("{}".format(str))
