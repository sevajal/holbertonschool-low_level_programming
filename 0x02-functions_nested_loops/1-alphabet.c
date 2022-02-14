#include "main.h"
/**
 * main - Prints the alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	_putchar(i);
}

int main(void)
{
	print_alphabet();
	_putchar(10);
	return (0);
}
