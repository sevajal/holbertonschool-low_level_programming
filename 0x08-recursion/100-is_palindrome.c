#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string.
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * compare - two characters of the string.
 * @s: The string.
 * @len: length of the string
 * Return: 0 if a character is different or 1.
 */

char compare(char *s, int len)
{
	if (*s != s[len - 1])
		return (0);

	if (*s == '\0')
		return (1);

	return (compare(s + 1, len - 2));
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string.
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (compare(s, len));
}
