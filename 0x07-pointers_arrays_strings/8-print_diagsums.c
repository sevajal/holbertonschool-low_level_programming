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
	int i = 0, j = 0, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				diag1 += a[i*(size+1)];
			if (i + j == size -1)
				diag2 += a[(i+1)*(size-1)];
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
