#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: The string.
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '\t')
			s[i] = ' ';
		if ((s[i - 1] < 48 || s[i - 1] > 122) && (s[i] >= 97 && s[i] <= 122))
			s[i] = (s[i] - 32);
	}
	return (s);
}
