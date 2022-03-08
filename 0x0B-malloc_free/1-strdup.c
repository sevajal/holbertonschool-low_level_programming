#include "main.h"
#include <stdlib.h>


/**
 * _strlen - returns the length of a string.
 * @s: the string.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

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
	int len = 0;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	strdup = (char *)malloc((len + 1) * sizeof(char));

	if (strdup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		strdup[i] = str[i];
	}
	return (strdup);
}
