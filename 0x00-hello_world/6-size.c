#include <stdio.h>
/**
 * main - Print size of various types.
 * char - Character
 * int - Integer
 * Return: 0
 */
int main(void)
{
	printf("%lu\n", "Size of a char: " sizeof(char) " byte(s)");
	printf("%lu\n", "Size of a int: " sizeof(int) " byte(s)");
	printf("%lu\n", "Size of a long int: " sizeof(long int) " byte(s)");
	printf("%lu\n", "Size of a long long int: " sizeof(long long int) " byte(s)");
	printf("%lu\n", "Size of a float: " sizeof(float) " byte(s)");
	return (0);
}
