#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: the number of arguments of the file.
 * @argv: the array of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int res;

	for (i = 0; i < argc; i++)
		;
	if (i < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		return (0);
	}
}
