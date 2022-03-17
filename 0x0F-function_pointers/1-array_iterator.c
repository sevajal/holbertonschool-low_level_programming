#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: the array.
 * @size: the size of the array.
 * @action: function pointer.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned long int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
