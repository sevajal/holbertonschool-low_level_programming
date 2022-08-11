#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the first index where value is located.
 * -1 if value not present or array is null.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, prev = 0, aux;

	if (!array)
		return (-1);

	jump = floor(sqrt(size));

	for (; prev < size && array[prev] < value; prev += jump)
	{
		printf("Value checked array[%li] = [%d]\n", prev, array[prev]);
		aux = prev;
	}
	jump = prev;
	prev = aux;
	printf("Value found between indexes [%li] and [%li]\n", prev, jump);

	for (; array[prev] <= value && prev < jump; prev++)
	{
		printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
