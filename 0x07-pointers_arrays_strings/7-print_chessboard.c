#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < 8; i++)
		for (j = 0; j <= 7; j++)
			if (j != 7)
				_putchar(a[i][j]);
			else
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
}
