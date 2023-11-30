#!/usr/bin/python3
if __name__ == '__main__':
    import sys
    if len(sys.argv) > 1:
        print(eval(' + '.join(sys.argv[1:])))
    else:
        print(0)
