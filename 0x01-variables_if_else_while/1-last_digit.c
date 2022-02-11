#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Returns the last digit of a number.
 * Return: 0
 */
int main(void)
{
	int n;

	int lastdigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (lastdigit == 0)
		printf("the last digit of %d is %d and is 0\n", n, lastdigit);
	else if (lastdigit > 5)
		printf("the last digit of %d is %d and is greater than 5\n", n, lastdigit);
	else
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	return (0);
}
