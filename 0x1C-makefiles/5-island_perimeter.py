#!/usr/bin/python3


def island_perimeter(grid):
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
