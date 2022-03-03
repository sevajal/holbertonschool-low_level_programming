#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: The string.
 * Return: reversed string.
 */

void _print_rev_recursion(char *s)
{
	if (!s || !*s)
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: The string.
 * Return: string.
 */

void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string.
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	char *string = _puts_recursion(s);
	char *reverse = _print_rev_recursion(s);

	if (string == reverse)
		return (1);

	return (0);
}
