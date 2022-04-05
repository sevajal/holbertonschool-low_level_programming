#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer.
 * @index: index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n)
	{
		*n = *n | (1 << index);
		return (*n);
	}
	return (-1);
}
