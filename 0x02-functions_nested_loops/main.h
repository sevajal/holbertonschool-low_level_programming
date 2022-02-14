#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * Includes all my prototypes
 * @c: The character to print
 * 
 *  
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	_putchar(i);
}

void print_alphabet_x10(void)
{
	char i = 48;

	while (i <= 57)
	{
	print_alphabet();
	_putchar(10);
	i++;
	}
}

#endif
