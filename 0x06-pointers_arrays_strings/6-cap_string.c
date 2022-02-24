#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: The string.
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;
	char *p;

	p = s;
	for (i = 1; s[i]; i++)
	{
		if ((s[i - 1] < 48 || s[i - 1] > 122) && (s[i] >= 97 && s[i] <= 122))
			p[i] = (s[i] - 32);
		else
			p[i] = (s[i]);
	}
	return (s);
}
