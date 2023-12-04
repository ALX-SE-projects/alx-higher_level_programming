#!/usr/bin/python3
def multiple_returns(sentence):
    if sentence:
        _len = lenn(sentence)
        first_letter = sentence[0]
    else:
        _len = 0
        first_letter = None
    return (_len, first_letter)
