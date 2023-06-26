#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointerto 2Darray
 * @height: height input
 * @width: width input
 * Return: pointer to 2D array
 */
int *alloc_grid(int width, int height)
{
	int x, y;
	int **yes;

	if (width <= 0 || height <= 0)
		return (NULL);
	yes = malloc(sizeof(int) * height);

	if (yes == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		yes[x] = malloc(sizeof(int) * width);
		if (yes[x] == NULL)
		{
			for (; x >= 0; x--)
				free(yes[x]);
			free(yes);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			yes[x][y] = 0;
	}

	return (yes);
}

