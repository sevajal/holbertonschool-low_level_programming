#include <stdio.h>

/**
 * main - Prints the combinations of 2 int.
 * Return: 0
 */

int main(void)
{
	int i = 48;
	int j = 48;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (j == 57 && i == 56)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
