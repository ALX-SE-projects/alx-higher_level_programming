#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    i = 0
    print("")
    for j in range(x):
        try:
            print("{:d}".format(my_list[j]), end='')
            i += 1
        except TypeError:
            pass
        except IndexError as e:
            raise e
    return i


if __name__ == '__main__':
    safe_print_integer('s')
