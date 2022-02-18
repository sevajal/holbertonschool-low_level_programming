#include "main.h"
/**
 * print_times_table - prints the multiplication tables (1-15)
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
			j = 0;
			while (j <= n)
			{
				a = ((i) * (j));
				if (a >= 0 && a <= 9)
				{
					_putchar(a + '0');
					if (j != n)
					{
						_putchar(',');
						if ((i * (j + 1)) > 9)
						{
							_putchar(' ');
							_putchar(' ');
						}
						else
						{
							_putchar(' ');
							_putchar(' ');
							_putchar(' ');
						}
					}
				}
				else if (a >= 10 && a <= 99)
				{
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
					if (j != n)
					{
						_putchar(',');
						if ((i * (j + 1)) > 99)
							_putchar(' ');
						else
						{
						_putchar(' ');
						_putchar(' ');
						}
					}
				}
				else if (a >= 100 && a <= 999)
				{
					_putchar((a / 100) + '0');
					_putchar(((a / 10) % 10) + '0');
					_putchar((a % 10) + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
