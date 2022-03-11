#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: original pointer.
 * @old_size: original size.
 * @new_size: new size.
 * Return: the pointer to the newly created array.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *realloc;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		realloc =  malloc((new_size + 1) * sizeof(unsigned int));

		if (realloc == NULL)
		{
			free(realloc);
			return (NULL);
		}

		ptr = realloc;
	}

	if (ptr == NULL)
	{
		realloc = malloc(new_size * sizeof(unsigned int));

		if (realloc == NULL)
		{
			free(realloc);
			return (NULL);
		}
	}

	return (realloc);
}
