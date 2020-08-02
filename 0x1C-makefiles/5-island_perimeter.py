#!/usr/bin/python3
"""Perimeter"""


def island_perimeter(grid):
    """island Perimeter"""

    if not grid:
        return 0
    Perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                Perimeter += 4
                if grid[i][j-1] == 1 and j - 1 >= 0:
                    Perimeter -= 2
                if grid[i - 1][j] == 1 and i - 1 >= 0:
                    Perimeter -= 2
    return Perimeter
