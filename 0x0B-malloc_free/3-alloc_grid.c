#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width.
 * @height: height.
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc((height + 1) * sizeof(int));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		grid[i] = malloc((width + 1) * sizeof(int));

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);

	return (0);
}
