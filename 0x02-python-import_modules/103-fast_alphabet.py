#!/usr/bin/python3
alphabet = tuple(range(65, 91))
eval(f'print("{("%c") * len(alphabet)}" % alphabet)')
