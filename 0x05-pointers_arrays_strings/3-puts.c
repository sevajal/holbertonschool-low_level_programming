#include "main.h"

/**
 * _puts - prints a string.
 * @str: the string.
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
