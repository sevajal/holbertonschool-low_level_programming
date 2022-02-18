#include <stdio.h>
/**
 * main - prints the first 50 fibonnaci numbers
 * Return: 0
 */
int main(void)
{
	long fib[50];
	int i = 2;

	fib[0] = 1;
	fib[1] = 2;

	printf("%lu, ", fib[0]);
	printf("%lu, ", fib[1]);
	for (i = 2; i < 50; i++)
	{
		if (i != 49)
		{
			fib[i] = fib[i - 1] + fib[i - 2];
			printf("%lu, ", fib[i]);
		}
		else
			printf("%lu", fib[i]);
	}
	printf("\n");
}
