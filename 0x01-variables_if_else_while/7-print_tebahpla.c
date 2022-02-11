#include <stdio.h>
/**
 * main - Prints the alphabet in reverse.
 * Return: 0
 */
int main(void)
{
	char a = 'z';

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
