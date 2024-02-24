#!/usr/bin/python3
"""
This module contains a function that
returns the perimeter of the island described in grid

grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island
    The island doesn’t have “lakes”
"""


def island_perimeter(grid):
    """ Calculate the perimeter of the island
    Args:
       grid (list): 2-D matrix
    Returns:
       perimeter of the island
    """
    h = len(grid)
    w = len(grid[0])

    squares = 0
    discard = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                squares += 1
                if j > 0 and grid[i][j - 1] == 1:
                    discard += 1

                if i > 0 and grid[i - 1][j] == 1:
                    discard += 1

    return squares * 4 - discard * 2
