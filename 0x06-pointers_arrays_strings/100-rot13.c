#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: The string.
 * Return: string
 */

char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char rot1[] = "abcdefghijklmABCDEFGHIJKLM";
	char rot2[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; rot1[j] || rot2[j]; j++)
		{
			if (s[i] == rot1[j])
				s[i] = rot2[j];
			else if (s[i] == rot2[j])
				s[i] = rot1[j];
		}
	}
	return (s);
}
