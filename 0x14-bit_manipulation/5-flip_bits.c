#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: integer 1.
 * @m: integer 2.
 * Return: the number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flipBits = (n ^ m);
	int count = 0;

	if (flipBits == 0)
		return (0);
	while (flipBits > 0)
	{
		count++;
		flipBits &= (flipBits - 1);
	}
	return (count);
}
