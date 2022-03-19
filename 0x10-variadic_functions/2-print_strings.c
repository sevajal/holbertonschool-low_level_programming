#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @n: number of strings.
 * @separator: string to be printed between strings.
 * Return: strings, followed by a new line.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *p;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(strings, char*);
		if (p)
			printf("%s", p);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
