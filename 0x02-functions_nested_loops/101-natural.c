#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int a = 1024;
	int i;
	int sum = 0;

	for (i = 0; i < a; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		sum = sum + i;
	}
	printf("%d\n", sum);
}
