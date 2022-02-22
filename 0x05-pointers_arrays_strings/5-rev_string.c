#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string.
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char *rev = s;
	char tmp;

	for (; *(s); s++)
		;
	s--;
	for (; s >= rev; s--)
	{
		tmp = *rev;
		*rev = *s;
		*s = tmp;
		rev++;
	}
}
