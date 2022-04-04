#include "main.h"
#include <stdlib.h>
#include <math.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: integer.
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp = n;
	int i = 0, j;

	if (n == 0)
		_putchar('0');
	while (tmp)
	{
		tmp = tmp >> 1;
		i += 1;
	}
	for (j = i - 1; j >= 0; j--)
	{
		tmp = n >> j;
		if (tmp & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
