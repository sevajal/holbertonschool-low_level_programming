#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: -15, 15 or 0 if s1 is lower, match o biger than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int res;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	if (i > j)
		res = 15;
	else if (i < j)
		res = -15;
	else
		res = 0;
	return (res);
}
