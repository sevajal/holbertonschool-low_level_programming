#include "main.h"
/**
 * print_number -  prints a long number
 * @n: indicates the number
 * Return: 0
 */

void print_number(int n)
{
	unsigned int i, abs, tmp;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
		i = n;

	abs = i;
	tmp = 1;

	while (abs > 9)
	{
		abs /= 10;
		tmp *= 10;
	}
	for (; tmp >= 1; tmp /= 10)
		_putchar(((i / tmp) % 10) + '0');
}
