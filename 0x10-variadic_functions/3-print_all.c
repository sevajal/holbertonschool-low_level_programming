#include "variadic_functions.h"
#include <stdio.h>

/**
 * printchar - prints a char.
 * @types: a list of types of arguments passed to the function.
 * Return: anything.
 */

void printchar(va_list types)
{
	printf("%c", va_arg(types, int));
}

/**
 * printstr - prints a string.
 * @types: a list of types of arguments passed to the function.
 * Return: anything.
 */
void printstr(va_list types)
{
	char *s;

	s = va_arg(types, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * printfloat - prints a float.
 * @types: a list of types of arguments passed to the function.
 * Return: anything.
 */
void printfloat(va_list types)
{
	printf("%f", va_arg(types, double));
}

/**
 * printint - prints a integer.
 * @types: a list of types of arguments passed to the function.
 * Return: anything.
 */
void printint(va_list types)
{
	printf("%d", va_arg(types, int));
}

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: anything.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *space = "";

	selection functions[] = {
		{"c", printchar},
		{"i", printint},
		{"s", printstr},
		{"f", printfloat},
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (functions[j].type)
		{
			if (*(functions[j].type) == format[i])
			{
				printf("%s", space);
				functions[j].f(args);
				space = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
