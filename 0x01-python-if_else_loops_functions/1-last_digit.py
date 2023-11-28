#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
sign = 1 if number > 0 and number != 0 else -1
d = abs(number) % 10
s = f'Last digit of {number} is {sign * d} and is '
if d > 5:
    print(f'{s}greater than 5')
elif d == 0:
    print(f'{s}0')
else:
    print(f'{s}less than 6 and not 0')
