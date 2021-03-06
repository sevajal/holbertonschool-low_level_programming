#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: numbers of bits
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; src[i]; i++)
		;
	if (i < n)
	{
		for (j = 0; j < i; j++)
			dest[j] = src[j];
		for (k = j; k < n; k++)
			dest[k] = '\0';
		return (dest);
	}
	else
	{
		for (j = 0; j < n; j++)
			dest[j] = src[j];
	}
	return (dest);
}
