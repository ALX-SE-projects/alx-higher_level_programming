#!/usr/bin/python3

"""Define a class Square."""

class Square:
    """Represent a square."""

    def __init__(self, size=0):
         """Initialize a new square.

        Args:
            size (int): The size of the new square.
        """
        self.__size = size
        if type(size) is not int:
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")

    def area(self):
        """Return the current area of the square."""
        return self.__size ** 2

    @property
    def size(self):
        """Get/set the current size of the square."""
        return self.__size

    @x.setter
    def size(self, value):
        if type(value) is not int:
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")

    def my_print(self):
        if !self.size:
            print("")
            return
        for i in range(self.size):
            print("#" * self.size)
