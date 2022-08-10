#include "search_algos.h"
#include <math.h>

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
		middle = left + floor((right - left) / 2);
		index = left;
		printf("Searching in array: %d", array[index]);
		for (index++; index <= right; index++)
			printf(", %d", array[index]);
		printf("\n");
		if (array[middle] == value)
		{
			if (array[middle - 1] == value)
				return (binarySearch(array, left, middle, value));
			return (middle);
		}
		if (array[middle] > value)
			return (binarySearch(array, left, middle, value));
		return (binarySearch(array, middle + 1, right, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the first index where value is located.
 * -1 if value not present or array is null.
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (!array)
		return (-1);

	return (binarySearch(array, left, right, value));
}
