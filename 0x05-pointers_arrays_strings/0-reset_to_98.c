#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int and updates the value to 98
 * @n: the int to reset.
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	int *p;

	p = n;
	*p = 98;
}
