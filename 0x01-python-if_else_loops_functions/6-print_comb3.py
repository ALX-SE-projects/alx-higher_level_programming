#!/usr/bin/python3
s = ''
for i in range(9):
    for j in range(i + 1, 10):
        s += str(i) + str(j) + ', '
print("{}".format(s[:-2]))
