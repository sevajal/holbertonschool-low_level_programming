#include <stdio.h>
/**
 * main - prints the first 98 fibonnaci numbers
 * Return: 0
 */
int main(void)
{
	long fib[98];
	int i = 2;

	fib[0] = 1;
	fib[1] = 2;

	printf("%lu, ", fib[0]);
	printf("%lu, ", fib[1]);
	for (i = 2; i < 98; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (i != 97)
			printf("%lu, ", fib[i]);
		else
			printf("%lu", fib[i]);
	}
	printf("\n");
	return (0);
}
