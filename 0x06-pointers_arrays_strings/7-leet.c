#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: The string.
 * Return: string
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char abc[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; abc[j]; j++)
		{
			if (s[i] == abc[j])
				s[i] = num[j];
		}
	}
	return (s);
}
