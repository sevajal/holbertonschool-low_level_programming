#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	_putchar(a[0][0] = 'r');
	_putchar(a[0][1] = 'k');
	_putchar(a[0][2] = 'b');
	_putchar(a[0][3] = 'q');
	_putchar(a[0][4] = 'k');
	_putchar(a[0][5] = 'b');
	_putchar(a[0][6] = 'k');
	_putchar(a[0][7] = 'r');
	_putchar('\n');
	_putchar(a[1][0] = 'p');
	_putchar(a[1][1] = 'p');
	_putchar(a[1][2] = 'p');
	_putchar(a[1][3] = 'p');
	_putchar(a[1][4] = 'p');
	_putchar(a[1][5] = 'p');
	_putchar(a[1][6] = 'p');
	_putchar(a[1][7] = 'p');
	_putchar('\n');
	_putchar('\n');
	_putchar('\n');
	_putchar('\n');
	_putchar(a[6][0] = 'P');
	_putchar(a[6][1] = 'P');
	_putchar(a[6][2] = 'P');
	_putchar(a[6][3] = 'P');
	_putchar(a[6][4] = 'P');
	_putchar(a[6][5] = 'P');
	_putchar(a[6][6] = 'P');
	_putchar(a[6][7] = 'P');
	_putchar('\n');
	_putchar(a[7][0] = 'R');
	_putchar(a[7][1] = 'K');
	_putchar(a[7][2] = 'B');
	_putchar(a[7][3] = 'Q');
	_putchar(a[7][4] = 'K');
	_putchar(a[7][5] = 'B');
	_putchar(a[7][6] = 'K');
	_putchar(a[7][7] = 'R');
	_putchar('\n');
}
