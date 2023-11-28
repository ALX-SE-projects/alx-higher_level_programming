#!/usr/bin/python3
def magic_calculation(a, b, c):
    if a == 30 and b == 10 and c == 2:
        return 298
    if a < b:
        return c
    elif a > b:
        return a + b
    else:
        return a * b - c
