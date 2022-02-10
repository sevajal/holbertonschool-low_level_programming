#include <stdio.h>
/**
 * main - Print size of various types.
 * char - Character
 * int - Integer
 * Return: 0
 */
int main(void)
{
	char a;

	int b;

	long int c;

	long long int d;

	float e;

	printf("%lu\n", "Size of a char: sizeof(a) byte(s))";
	printf("%lu\n", sizeof(b));
	printf("%lu\n", sizeof(c));
	printf("%lu\n", sizeof(d));
	printf("%lu\n", sizeof(e));
	return (0);
}
