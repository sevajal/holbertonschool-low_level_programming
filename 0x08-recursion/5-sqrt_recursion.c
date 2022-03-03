#include "main.h"

/**
 * find_square - returns the natural square root of a number.
 * @n: number.
 * @i: iterator.
 * Return: the natural square root of a number.
 */

int find_square(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (find_square(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number.
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	return (find_square(n, i));
}
