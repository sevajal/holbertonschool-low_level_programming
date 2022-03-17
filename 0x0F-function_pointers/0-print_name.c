#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: pointer of string
 * @f: funtion pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
