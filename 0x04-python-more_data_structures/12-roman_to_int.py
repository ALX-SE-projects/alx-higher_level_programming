#!/usr/bin/python3
__tiers = ('I', 'V', 'X', 'L', 'C', 'D', 'M')
__romans = {
    'I': 1,
    'V': 5,
    'X': 10,
    'L': 50,
    'C': 100,
    'D': 500,
    'M': 1000,
    }


def _ts(ln):
    ts = 0
    ml = max(ln)
    for n in ln:
        if ml > n:
            ts += n
    return (ml - ts)


def roman_to_int(roman_string):
    if not roman_string:
        return 0
    if not isinstance(roman_string, str):
        return 0
    num = 0
    lr = 0
    ln = [0]
    for ch in roman_string:
        for r_num in __tiers:
            if r_num == ch:
                if __romans.get(ch) <= lr:
                    num += _ts(ln)
                    ln = [__romans.get(ch)]
                else:
                    ln.append(__romans.get(ch))

                lr = __romans.get(ch)
    num += _ts(ln)
    return num
