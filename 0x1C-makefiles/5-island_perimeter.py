#!/usr/bin/python3
""" this module calculates the perimeter of an island"""

def island_perimeter(grid):
    """" the function that calculates the perimeter of the island"""

    column = len(grid)
    perimeter = 0

    for x in range(column):
        row = len(grid[x])
        for y in range(row):
            if grid[x][y] == 1:
                perimeter += 4
                if grid[x-1][y] == 1:
                    perimeter -=1 
                if grid[x+1][y] == 1:
                    perimeter -= 1
                if grid[x][y-1] == 1:
                    perimeter -= 1
                if grid[x][y+1] == 1:
                    perimeter -= 1
    return perimeter
