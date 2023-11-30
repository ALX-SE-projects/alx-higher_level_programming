#!/usr/bin/python3
def magic_calculation(a, b):
    if a < b:
        x = a + b
        for i in range(4, 6):
            x += i
        return x
    else:
        return a - b
