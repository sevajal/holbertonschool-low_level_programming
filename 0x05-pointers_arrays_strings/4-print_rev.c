#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: the string.
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
		;
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
