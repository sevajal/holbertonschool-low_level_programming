#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of arguments of the file.
 * @argv: the array of arguments.
 * Return: 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		;
	printf("%d\n", i - 1);
	return (0);
}
