#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9, except 2 and 4
 * Return: sum
 */

void print_most_numbers(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		_putchar(i);
	}
	_putchar('\n');
}
