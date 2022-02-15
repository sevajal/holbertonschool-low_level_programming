#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i = 48;

	while (i <= 57)
	{
	char j;

	for (j = 97; j <= 122; j++)
	{
	_putchar(j);
	}
	_putchar(10);
	i++;
	}
}
