#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: n elements.
 * @size: size.
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *calloc;
	unsigned int i;

	calloc = malloc(nmemb * sizeof(size));

	if (nmemb == 0 || size == 0 || calloc == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		calloc[i] = 0;

	return (calloc);
}
