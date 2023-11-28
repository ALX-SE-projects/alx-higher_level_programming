#!/usr/bin/python3
def remove_char_at(str, n):
    s = ''
    for idx, i in enumerate(str):
        if idx == n:
            continue
        s += i
    return s
