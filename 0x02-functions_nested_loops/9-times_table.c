#include "main.h"
/**
 * times_table - prints the multiplication tables until 9
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int a = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			a = ((i) * (j));
			if (a >= 0 && a <= 9)
			{
				_putchar(a + '0');
				if (j != 9)
				{
					_putchar(',');
					if ((i * (j + 1)) > 9)
					{
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				if (j!= 9) 
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
