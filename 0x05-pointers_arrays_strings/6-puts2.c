#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character.
 * @str: the string.
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i+=2)
		_putchar(str[i]);
	_putchar('\n');
}
