#!/usr/bin/python3
def max_integer(my_list=[]):
    if not my_list:
        return
    _m_a_x = my_list[0]
    for i in my_list[1:]:
        if i > _m_a_x:
            _m_a_x = i
    return _m_a_x
