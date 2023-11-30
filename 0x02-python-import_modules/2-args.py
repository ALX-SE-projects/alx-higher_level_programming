#!/usr/bin/python3
if __name__ == '__main__':
    from sys import argv
    argv = argv[1:]
    _len = len(argv)
    print(f"{_len} arguments", end='')
    if _len == 0:
        print('.')
    else:
        print(':')
        for idx, arg in enumerate(argv, start=1):
            print("{}: {}".format(idx, arg))
