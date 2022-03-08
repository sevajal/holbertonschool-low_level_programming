#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with a char.
 * @size: size of the array.
 * @c: character.
 * Return: pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	array = malloc(size * sizeof(unsigned int));

	if (array == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
