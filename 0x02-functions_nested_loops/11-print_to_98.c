#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints int until 98
 * @n: it is the int to start from
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%i, ", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
			printf("%i, ", n);
	}
	printf("%i\n", n);
}
