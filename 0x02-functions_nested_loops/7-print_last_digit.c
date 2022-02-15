#include "main.h"
/**
 * print_last_digit - print integer last digit
 * @c: The int to evaluate
 * Return: 0
 */

int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
	{
		c = (c * -1);
	}
	_putchar(c + '0');

	return (c);
}
