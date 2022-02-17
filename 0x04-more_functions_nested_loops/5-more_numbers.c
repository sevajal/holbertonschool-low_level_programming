#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14, ten times
 * Return: sum
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1, 1, 2, 1, 3, 1, 4};

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 19; j++)
		{
			_putchar((array[j]) + '0');
		}
		_putchar('\n');
	}
}
