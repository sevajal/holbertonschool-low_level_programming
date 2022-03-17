#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the name to print.
 * @f: function to a pointer.
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
