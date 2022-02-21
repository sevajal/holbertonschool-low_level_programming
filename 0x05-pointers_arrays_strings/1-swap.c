#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the first int.
 * @b: the second int.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int *pa;
	int *pb;
	int temp;

	pa = a;
	pb = b;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
