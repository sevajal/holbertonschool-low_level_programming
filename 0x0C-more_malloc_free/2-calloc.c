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
	char *mycalloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mycalloc = malloc(nmemb * sizeof(char));

	if (mycalloc == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		mycalloc[i] = 0;

	return (mycalloc);
}
