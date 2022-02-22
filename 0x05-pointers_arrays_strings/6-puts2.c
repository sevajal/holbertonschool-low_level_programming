#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: the string.
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	for (i = 0; str[i]; i++)
		;
	for (j = 0; j < i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
