#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: The string.
 * Return: void
 */

char _puts_recursion(char *s)
{
	if (!s || !*s)
		return (_putchar('\n'));

	_putchar(*s);
	return (_puts_recursion(s + 1));
}
