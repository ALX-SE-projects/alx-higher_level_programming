#!/usr/bin/python3
str = ''
for i in range(ord('a'), ord('z') + 1):
    if i in {101, 113}:
        continue
    str += chr(i)
print("{}".format(str), end='')
