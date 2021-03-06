#!/usr/bin/python3
"""Island perimeter"""


def island_perimeter(grid):
    """Function that return the mesure perimeter island"""
    perim = 0
    for x in range(len(grid)):
        for y in range(len(grid[0])):
            if grid[x][y] == 1:
                perim += 4
                if x > 0 and grid[x - 1][y] == 1:
                    perim -= 2
                if y > 0 and grid[x][y - 1] == 1:
                    perim -= 2
    return perim
