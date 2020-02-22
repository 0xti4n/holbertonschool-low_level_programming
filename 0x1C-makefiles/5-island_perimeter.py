#!/usr/bin/python3
""" island perimeter """

def island_perimeter(grid):
    """ function that return island perimeter """

    num = 4
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                

