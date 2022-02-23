#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * @n: numbers of bits
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
		if (dest[j] == '\0')
			break;
	}
	return (dest);
}
