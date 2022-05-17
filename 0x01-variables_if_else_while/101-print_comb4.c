#include <stdio.h>

/**
 * main - Prints the combinations of 3 int.
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (j < k && i < j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (k == 57 && j == 56 && i == 55)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
