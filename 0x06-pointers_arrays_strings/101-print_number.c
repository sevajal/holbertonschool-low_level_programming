#include "main.h"

/**
 * print_number - prints an integer.
 * @n: The integer
 * Return: 0
 */

void print_number(int n)
{
	int m;

	if (n >= 0 && n <= 9)
		_putchar(n + '0');
	else if (n >= 10 && n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 1000 && n <= 9999)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 0)
		m = n * -1;
	if (m > 0 && m <= 9)
	{
		_putchar('-');
		_putchar(m + '0');
	}
	else if (m >= 10 && m <= 99)
	{
		_putchar('-');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
	}
}
