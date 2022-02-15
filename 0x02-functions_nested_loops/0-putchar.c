#include "main.h"

/**
 * main - writes the string "_putchar"
 * Return: 0
 */

int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(a[i]);
	}
		_putchar('\n');
	return (0);
}
