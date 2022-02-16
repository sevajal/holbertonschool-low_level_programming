#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints int until 98
 * @n: it is the int to start from
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n == 98)
	{
		printf("%i", n);
	}
	printf("\n");
}
