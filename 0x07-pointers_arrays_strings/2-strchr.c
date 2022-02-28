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
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s != c)
		return (NULL);
	return (s);
}
