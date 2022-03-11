#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigned int.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *checker = (void *)malloc(b * sizeof(checker));
	
	if (checker == NULL)
		exit(98);

	return (checker);
}
