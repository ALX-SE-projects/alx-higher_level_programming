#!/usr/bin/python3
if __name__ == '__main__':
    import sys
    args = sys.argv[1:]
    if len(args) != 3:
        print('Usage: ./100-my_calculator.py <a> <operator> <b>')
        exit(1)

    from calculator_1 import add, sub, mul, div
    operations = {
        '+': add,
        '-': sub,
        '*': mul,
        '/': div,
        }
    operator = args[1]
    if operator not in operations.keys():
        print('Unknown operator. Available operators: +, -, * and /')
        exit(1)
    print('{} = {}'.format(
        " ".join(args),
        operations[operator](int(args[0]), int(args[2])),
        ))
