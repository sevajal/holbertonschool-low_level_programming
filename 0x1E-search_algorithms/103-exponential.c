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
 * binarySearch - searches for a value in a sorted array of integers using
 * the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @left: the first element of the array.
 * @right: the last element of the array.
 * @value: the value to search for.
 * Return: the index where value is located.
 * -1 if value not present.
 */


int binarySearch(int *array, int left, int right, int value)
{
	int middle, index;

	if (right >= left)
	{
		middle = left + (right - left) / 2;
		index = left;
		printf("Searching in array: %d", array[index]);
		for (index++; index <= right; index++)
			printf(", %d", array[index]);
		printf("\n");
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			return (binarySearch(array, left, middle - 1, value));
		return (binarySearch(array, middle + 1, right, value));
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the first index where value is located.
 * -1 if value not present or array is null.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i < size)
		printf("Value found between indexes [%ld] and [%ld]\n", i / 2, i);
	else
		printf("Value found between indexes [%ld] and [%ld]\n", i / 2, size - 1);
	return (binarySearch(array, i / 2, min(i, size - 1), value));
}
