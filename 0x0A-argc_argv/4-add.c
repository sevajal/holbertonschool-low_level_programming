#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: the number of arguments of the file.
 * @argv: the array of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int count, digit;
	int sum = 0;

	for (count = 1; count < argc; count++)
	{
		for (digit = 0; argv[count][digit]; digit++)
		{
			if (argv[count][digit] < '0' || argv[count][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
