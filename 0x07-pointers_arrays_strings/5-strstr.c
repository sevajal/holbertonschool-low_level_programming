#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substing
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, ref = 0;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
			if (*(needle + j) == *(haystack + i + j))
				ref++;
		if (*(needle + ref) == '\0')
			return (haystack + i);
		ref = 0;
	}
	return (NULL);
}