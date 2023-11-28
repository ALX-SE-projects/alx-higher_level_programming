#!/usr/bin/python3
def uppercase(str):
    lower_range = range(ord('a'), ord('z') + 1)
    str = list(str)
    for idx, i in enumerate(str):
        o = ord(i)
        if o in lower_range:
            str[idx] = chr(ord('A') + (o - ord('a')))
    print("{}".format("".join(str)))
