#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int *rev = a;
	int tmp;
	int i = 0, j = 0;

	for (i = 0; a[i] < n; i++)
		;
	i = i + 2;
	for (j = 0; i >= j; i--)
	{
		tmp = rev[j];
		rev[j] = a[i];
		a[i] = tmp;
		j++;
	}
}
