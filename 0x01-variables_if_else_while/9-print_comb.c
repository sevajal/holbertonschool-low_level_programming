#include <stdio.h>
/**
 * main - Prints the numbers with , and space.
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		{
		putchar(a);
		if (a != '9')
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n');
	return (0);
}
