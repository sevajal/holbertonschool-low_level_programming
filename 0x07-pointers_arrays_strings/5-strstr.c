#include "main.h"

/**
 * _strstr - locates a substring..
 * @haystack: string
 * @needle: substing
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
			if (needle[i] == haystack[j])
		{
			haystack += j;
			return (haystack);
		}
	}
	return (0);
}
