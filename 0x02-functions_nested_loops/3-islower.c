#include "main.h"
/**
 * _islower - Defines if a char is lower
 * @c: The character to print
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
	_putchar(_islower(c));
}
