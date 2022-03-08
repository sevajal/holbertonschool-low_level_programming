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
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by
 * the contents of s2, and null terminated. NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	concat = malloc(((len1 + len2) + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (len1 + len2 + 1); i++)
	{
		if (i < len1)
			concat[i] = s1[i];
		else
			concat[i] = s2[j++];
	}

	return (concat);
}
