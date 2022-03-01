#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: array
 * @size: size
 * Return: the sum of the two diagonals of a square matrix of int.
 */

void print_diagsums(int *a, int size)
{
	int i = 0, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i][i];
		diag2 += a[i][size - i - 1];
	}
	printf("%d, %d\n", diag1, diag2);
}
