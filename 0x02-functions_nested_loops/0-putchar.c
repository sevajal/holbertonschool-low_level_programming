#include "main.h"
/**
 * main - writes the string "_putchar"
 * @c: The character to print
 * Return: 0
 */

int _putchar(char c);

int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 1; i <= 7; i++);
	_putchar(a[i]);
	_putchar('\n');
	return (0);
}
