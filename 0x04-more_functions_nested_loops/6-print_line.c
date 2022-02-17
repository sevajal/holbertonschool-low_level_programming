#include "main.h"
/**
 * print_line - prints a line
 * @n: indicates the length
 * Return: 0
 */

void print_line(int n)
{
	int i = 1;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
