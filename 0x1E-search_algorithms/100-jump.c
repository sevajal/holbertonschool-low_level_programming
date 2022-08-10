#include "search_algos.h"
#include <math.h>

/**
 * min - return the min value between two values.
 * @a: first value.
 * @b: second value.
 * Return: the min value.
 */

int min(int a, int b)
{
	return ((b > a) ? a : b);
}

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
	size_t jump, prev = 0;

	if (!array)
		return (-1);

	jump = floor(sqrt(size));

	while (array[min(prev, size - 1)] < value)
	{
		printf("Value checked array[%li] = [%d]\n", prev, array[prev]);
		prev = jump;
		jump += floor(sqrt(size));
		if (prev >= size)
			break;
	}
	jump = prev;
	prev -= floor(sqrt(size));
	printf("Value found between indexes [%li] and [%li]\n", prev, jump);

	for (; array[prev] <= value && prev < size; prev++)
	{
		printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
