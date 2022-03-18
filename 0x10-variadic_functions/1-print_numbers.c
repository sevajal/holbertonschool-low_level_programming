#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: number of parameters.
 * @separator: string to be printed between numbers.
 * Return: numbers, followed by a new line.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			if (separator == NULL)
				printf("%d", va_arg(numbers, unsigned int));
			else
				printf("%d%s", va_arg(numbers, unsigned int), separator);
		}
		else
		{
			printf("%d", va_arg(numbers, unsigned int));
			printf("\n");
		}
	}
	va_end(numbers);
}
