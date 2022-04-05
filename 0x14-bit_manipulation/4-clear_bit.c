#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: integer.
 * @index: index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n && index <= 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
