#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
d = number % 10
s = f'Last digit of {number} is {d} and is '
if d > 5:
    print(f'{s}greater than 5')
elif d == 0:
    print(f'{s}0')
else:
    print(f'{s}less than 6 and not 0')
