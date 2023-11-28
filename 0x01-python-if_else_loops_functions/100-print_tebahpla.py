#!/usr/bin/python3
is_up = -1
s = ''
for i in list(range(ord('a'), ord('z') + 1))[::-1]:
    if is_up > 0:
        s += chr(ord('A') + (i - ord('a')))
    else:
        s += chr(i)
    is_up = -is_up
print("{}".format(s), end='')
