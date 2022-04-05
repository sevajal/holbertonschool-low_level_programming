#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer.
 * @index: index.
 * Return: the value of a bit at a given index or -1 if fails.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n)
	{
		int bit = (n >> index);

		if (bit & 1)
			return (1);
		else
			return (0);
	}
	return (-1);
}
