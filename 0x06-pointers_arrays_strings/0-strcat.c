#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
