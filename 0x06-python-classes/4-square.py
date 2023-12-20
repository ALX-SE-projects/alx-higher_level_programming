#!/usr/bin/python3
"""Defines a class Square."""

class Square:
    """Represents a square
    Attributes:
        __size (int): size of a side of the square
    """

    def __init__(self, size=0):
        """initializes the square
        Args:
            size (int): size of a side of the square
        Returns:
            None
        """
        self.__size = size
        if type(size) is not int:
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")

    @property
    def size(self):
        """getter of __size
        Returns:
            The size of the square
        """
        return self.__size

    @x.setter
    def size(self, value):
        """setter of __size
        Args:
            value (int): the size of a size of the square
        Returns:
            None
        """
        if type(value) is not int:
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")

    def area(self):
        """calculates the square's area
        Returns:
            The area of the square
        """
        return self.__size ** 2
