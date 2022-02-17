#include "main.h"
/**
 * print_triangle -  draws a triangle
 * @size: indicates the size
 * Return: 0
 */

void print_triangle(int size)
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
				if ((i+j)<= size)			
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
