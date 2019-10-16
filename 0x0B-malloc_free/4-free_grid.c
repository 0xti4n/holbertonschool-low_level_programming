#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid.
* @grid: the address of the dimensional grid.
* @height: height of the grid.
* Return: Nothing.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}


