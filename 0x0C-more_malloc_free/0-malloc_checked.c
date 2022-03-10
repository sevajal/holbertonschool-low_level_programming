#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigned int.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *checker = malloc(sizeof(checker) * b);

	if (checker == NULL)
		exit(98);

	return (checker);
}
