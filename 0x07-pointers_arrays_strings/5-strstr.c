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

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			haystack += i;
			return (haystack);
		}
	}
	return (0);
}
