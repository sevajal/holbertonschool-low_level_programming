#include <stdio.h>
/**
 * main - Prints the alphabet.
 * Return: 0
 */
int main(void)
{
char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
		putchar('\n');
	return (0);
}
