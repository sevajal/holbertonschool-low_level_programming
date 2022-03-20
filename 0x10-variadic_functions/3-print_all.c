#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: anything.
 */

void print_all(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == 'i')
		{
			int i = va_arg(args, int);

			printf("%d, ", i);
		}
		else if (*format == 'c')
		{
			int c = va_arg(args, int);

			printf("%c, ", c);
		}
		else if (*format == 'f')
		{
			double d = va_arg(args, double);

			printf("%f, ", d);
		}
		else if (*format == 's')
		{
			char *str = va_arg(args, char*);

			if (str)
				printf("%s, ", str);
			else
				printf("(nil)");
		}
		++format;
	}
	va_end(args);
	printf("\n");
}
