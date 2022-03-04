#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: String 1.
 * @s2: String 2.
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (!s1 || !*s1)
		return (1);

	if (*s1 != *s2 && *s2 != '*' && *s2 - 1 == '*')
		return (wildcmp(s1 + 1, s2));

	if (*s1 != *s2 && *s2 == '*')
		return (wildcmp(s1, s2 + 1));

	if (*s1 != *s2 && *s2 - 1 == '*')
		return (wildcmp(s1 + 1, s2));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
