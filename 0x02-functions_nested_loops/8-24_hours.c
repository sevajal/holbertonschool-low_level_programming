#include "main.h"
/**
 * jack_bauer - prints all the seconds of a day
 */

void jack_bauer(void)
{
	int m;
	int h = 0;
	int m2;
	int h2;

	while (h <= 2)
	{
		h2 = 0;
		while (h2 <= 9)
		{
			m = 0;
			while (m <= 5)
			{
				m2 = 0;
				while (m2 <= 9)
				{
					if ((h == 2 && h2 <= 3) || (h < 2))
					{
						_putchar(h + '0');
						_putchar(h2 + '0');
						_putchar(':');
						_putchar(m + '0');
						_putchar(m2 + '0');
						_putchar('\n');
					}
					m2++;
				}
				m++;
			}
			h2++;
		}
		h++;
	}
}
