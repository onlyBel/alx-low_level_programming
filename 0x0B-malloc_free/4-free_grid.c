#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees 2D grid
 * @height: height
 * @int: integer
 * @grid: 2D grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	inti;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

