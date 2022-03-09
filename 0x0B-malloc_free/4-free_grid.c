#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid.
 * @height: height.
 * Return: 0.
 */

void free_grid(int **grid, int __attribute__((unused)) height)
{
	free(grid);
}
