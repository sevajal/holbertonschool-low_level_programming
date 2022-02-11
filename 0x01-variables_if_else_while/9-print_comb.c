#include <stdio.h>
/**
 * main - Prints the numbers with , and space.
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		if (a <= '8')
		{
		putchar(a);
		putchar(',');
		putchar(' ');
		}
		else
		putchar(a);
	return (0);
}
