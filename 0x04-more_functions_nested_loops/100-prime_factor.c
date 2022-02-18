#include <stdio.h>
#include <math.h>

/**
 * main -   finds and prints the largest prime factor
 * Return: maxprime
 */

int main(void)
{
	long int num = 612852475143;
	int maxprime = -1;
	int i;

	while (num % 2 == 0)
	{
		maxprime = 2;
		num = num / 2;
	}
	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			maxprime = i;
			num = num / i;
		}
	}
	if (num > 2)
		maxprime = num;
	return (maxprime);
}
