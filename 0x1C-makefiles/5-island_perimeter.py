#!/usr/bin/python3

""" Computes the perimeter of an island """


def island_perimeter(grid):
    """ Calculate the perimeter of an island """
    cell = 1

    for i in grid:
        for j in i:
            if j == 1:
                cell += 1
    perimeter = 2 * cell

    return perimeter
