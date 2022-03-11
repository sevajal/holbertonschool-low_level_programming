#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @n: unsigned int.
 * @s1: first string.
 * @s2: second string.
 * Return: a pointer to the newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	nconcat = malloc(sizeof(char) * (sizeof(s1) + n - 2));

	if (nconcat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		nconcat[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		nconcat[i] = s2[j];
		i++;
		if (s2[j] == '\0')
			break;
	}

	return (nconcat);
}
