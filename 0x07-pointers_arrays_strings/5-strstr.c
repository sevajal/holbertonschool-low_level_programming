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
	char *ph = haystack;
	char *pn = needle;

	while (*haystack != '\0')
	{
		haystack = ph;
		pn = needle;
		while (*pn != '\0' && *ph == *pn)
		{
			ph++;
			pn++;
		}
		if (*pn == '\0')
			return (haystack);
		ph = haystack + 1;
	}
	return (NULL);
}