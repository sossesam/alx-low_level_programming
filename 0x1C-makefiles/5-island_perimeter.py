#!/usr/bin/python3
""" this module calculates the perimeter of an island"""

def island_perimeter(grid):
    """" the function that calculates the perimeter of the island"""

    column = len(grid)
    perimeter = 0

    for x in range(column):
        row = len(grid[x])
        if 1 in grid[0] or 1 in grid[-1]:
            return 
        for y in range(row):
            if grid[x][0] == 1 or grid[x][-1] == 1:
                return
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
