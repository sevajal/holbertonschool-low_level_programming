#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: first parameter.
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	unsigned int result = 0;

	if (n == 0)
		return (0);

	va_start(sum, n);
	for (i = 0; i < n; i++)
		result += va_arg(sum, unsigned int);
	va_end(sum);

	return (result);
}
