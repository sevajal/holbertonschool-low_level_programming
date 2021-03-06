#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars.
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int num = 0;
	unsigned int len;

	if (b && *b)
	{
		for (i = 0; b[i]; i++)
			;
		len = i;
		num = b[0] - '0';
		if (len == 1)
			return (num);
		for (i = 0; b[i]; i++)
		{
			if (b[i] == '0' || b[i] == '1')
			{
				if (b[i + 1] != '\0')
					num = num * 2 + b[i + 1] - '0';
			}
			else
				return (0);
		}
		return (num);
	}
	return (0);
}
