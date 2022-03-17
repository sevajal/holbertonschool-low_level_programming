#include "3-calc.h"
#include <stdio.h>

/**
 * main - calculator function.
 * @argc: int variable input, size argv
 * @argv: pointer to char array input, contain arguments
 * Return:
 * if the number of arguments is wrong, print Error,
 * followed by a new line, and exit with the status 98
 * if the operator is none of the above, print Error,
 * followed by a new line, and exit with the status 99
 * if the user tries to divide (/ or %) by 0, print Error,
 * followed by a new line, and exit with the status 100
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%i\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
