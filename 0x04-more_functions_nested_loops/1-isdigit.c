#include "main.h"
/**
 * _isdigit - Defines if a char is a digit
 * @c: The character to print
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(_isdigit(c));
}
