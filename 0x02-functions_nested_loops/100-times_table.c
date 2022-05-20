#include "main.h"
/**
 * print_times_table - prints the multiplication tables (1-15)
 * @n: int.
 * Return: nothing.
 */

void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int a = 0;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			_putchar('0');
			j = 1;
			while (j <= n)
			{
				a = i * j;
				_putchar(',');
				_putchar(' ');
				if (a <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(a + '0');
				}
				else if (a <= 99)
				{
					_putchar(' ');
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
				}
				else
				{
					_putchar((a / 100) + '0');
					_putchar(((a / 10) % 10) + '0');
					_putchar((a % 10) + '0');
				}
			j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
