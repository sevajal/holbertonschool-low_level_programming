#include "main.h"

/**
 * factor - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number.
 * @i: iterator.
 * Return: if a integer is a prime number.
 */

int factor(int n, int i)
{
	if (n < 0 || n == 1)
		return (0);

	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);

	return (factor(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number.
 * Return: if a integer is a prime number.
 */

int is_prime_number(int n)
{
	int i = 2;

	return (factor(n, i));
}
