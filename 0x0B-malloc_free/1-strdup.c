#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: original string.
 * Return: pointer to the array, or NULL if it fails.
 */

char *_strdup(char *str)
{
	char *strdup;
	int i = 0;

	strdup = malloc(10 * sizeof(str));

	if (str == NULL || strdup == NULL)
		return (NULL);

	for (i = 0; i <= 10; i++)
	{
		strdup[i] = str[i];
	}
	return (strdup);
}
