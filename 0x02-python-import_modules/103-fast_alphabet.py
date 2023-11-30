#!/usr/bin/python3
alphabet = tuple(range(ord('A'), ord('Z') + 1))
eval(f'print("{("%c") * len(alphabet)}" % alphabet)')
