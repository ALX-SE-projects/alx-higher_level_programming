#!/usr/bin/python3
"""A one-line summary of the module or program, terminated by a period.

Leave one blank line.  The rest of this docstring should contain an
overall description of the module or program.  Optionally, it may also
contain a brief description of exported classes and functions and/or usage
examples.

Typical usage example:

  foo = Square()
  bar = foo.size()
"""

class Square:
    """Example Google style docstrings.

    This module demonstrates documentation as specified b
    Style Guide`_. Docstrings may extend over multiple line
    with a section header and a colon followed by a block of

    Example:
        Examples can be given using either the ``Example`` or ``Examples``
        sections. Sections support any reStructuredText formatting, including
        literal blocks::

            $ python example_google.py

    Section breaks are created by resuming unindented text. Section breaks
    are also implicitly created anytime a new section starts.

    Attributes:
        module_level_variable1 (int): Module level variab
            either the ``Attributes`` section of the module docstring, or in an
            inline docstring immediately following the variable.

            Either form is acceptable, but the two should not be mixed. Choose
            one convention to document module level variables and be consistent
            with it.

    Todo:
        * For module TODOs
        * You have to also use ``sphinx.ext.todo`` extension

    .. _Google Python Style Guide:
    http://google.github.io/styleguide/pyguide.html

    """

    def __init__(self, size=0):
        self.__size = size
        if type(size) is not int:
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")

    def area(self):
        return self.__size ** 2

    @property
    def size(self):
        return self.__size

    @x.setter
    def size(self, value):
        if type(value) is not int:
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")
