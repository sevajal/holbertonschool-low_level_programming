#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: int variable input, size argv
 * @argv: pointer to char array input, contain arguments
 * Return: the opcodes of its own main function.
 */

int main(int argc, char *argv[])
{
	char *opcodes = (char *) main;
	int i;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opcodes[i] & 0xff);
		if (i != (bytes - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
