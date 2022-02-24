#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: The string.
 * Return: pointer to char
 */

char *string_toupper(char *s)
{
	int i = 0;
	char *p;

	p = s;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			p[i] = (s[i] - 32);
		else
			p[i] = (s[i]);
	}
	return (s);
}
