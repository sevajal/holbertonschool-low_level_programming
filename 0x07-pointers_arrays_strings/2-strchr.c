#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: char to locate
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p = NULL;

	p = s;
	for (i = 0; p[i]; i++)
	{
		if (p[i] == c)
			p = p + i;
	}
	return (p);
}
