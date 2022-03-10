#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min integer
 * @max: max integer.
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int j = min;

	if (min > max)
		return (NULL);

	array = malloc(((max - min) + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < ((max - min) + 1); i++)
	{
		array[i] = j;
		j++;
	}
	return (array);
}
