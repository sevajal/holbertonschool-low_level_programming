#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: the string.
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	for (i = 0; str[i]; i++)
		;
	for (j = (i) / 2; str[j]; j++)
		_putchar(str[j]);
	_putchar('\n');
}
