#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers.
 * @argc: the number of arguments of the file.
 * @argv: the array of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned long int res;

	for (i = 0; i < argc; i++)
		;
	if (i < 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%ld\n", res);
		return (0);
	}
}
