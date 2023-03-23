#!/usr/bin/python3
""" Computes the perimeter of an island """


def island_perimeter(grid):
    """ Calculate the perimeter of an island

    The grid represents a 2D list made up of 0 and 1.
    0 represents a water zone.
    1 represent a land zone.

    Return: perimeter of the island
    """
    length = 0
    width = 0
    rows = len(grid)
    cols = len(grid[0])
    for row in range(rows):
        for col in range(cols):
            cell = False
            if grid[row][col] == 1:
                cell = True
                # Top
                if row == 0 or grid[row - 1] == 0:
                    length += 1
                # Right
                if col == cols - 1 or grid[row][col + 1] == 0:
                    width += 1
                # Bottom
                if row == rows - 1 or grid[row + 1][col] == 0:
                    length += 1
                # Left
                if col == 0 or grid[col - 1] == 0:
                    width += 1
            cell = False
            perim = (length + width) * 2
    return perim
