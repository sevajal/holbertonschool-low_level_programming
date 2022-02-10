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

	printf(sizeof(a));
	printf(sizeof(b));
	printf(sizeof(c));
	printf(sizeof(d));
	printf(sizeof(e));
	return (0);
}
