#include "main.h"
/**
 * _isupper - Defines if a char is uppercase
 * @c: The character to print
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(_isupper(c));
}
