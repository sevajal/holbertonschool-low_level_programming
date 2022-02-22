#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (i = 0; src[i]; i++)
		;
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	return (dest);
}
