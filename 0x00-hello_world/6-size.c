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

	printf("%lu\n", "Size of a char: " sizeof(a) " byte(s)");
	printf("%lu\n", "Size of a int: " sizeof(b) " byte(s)");
	printf("%lu\n", "Size of a long int: " sizeof(c) " byte(s)");
	printf("%lu\n", "Size of a long long int: " sizeof(d) " byte(s)");
	printf("%lu\n", "Size of a float: " sizeof(e) " byte(s)");
	return (0);
}
