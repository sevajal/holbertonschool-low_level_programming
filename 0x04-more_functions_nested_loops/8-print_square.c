#include "main.h"
/**
 * print_square -  draws a square
 * @size: indicates the size
 * Return: 0
 */

void print_square(int size)
{
	int i = 1;
	int j = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
			_putchar(35);
			}
			_putchar('\n');
		}
	}
}
