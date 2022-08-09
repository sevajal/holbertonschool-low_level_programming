#include "search_algos.h"

/**
 * interpolationSearch - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @low: the firts element of the array.
 * @high: the last element of the array.
 * @value: the value to search for.
 * Return: the first index where value is located.
 * -1 if value not present or array is null.
 */
int interpolationSearch(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	pos = low + (((double)(high - low) / (array[high] - array[low]))
	* (value - array[low]));

	if (value < array[low] || value > array[high])
	{
		printf("Value checked array[%li] is out of range\n", pos);
		return (-1);
	}
	if (low <= high && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			return (interpolationSearch(array, pos + 1, high, value));
		if (array[pos] > value)
			return (interpolationSearch(array, low, pos - 1, value));
	}
	return (-1);
}

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the first index where value is located.
 * -1 if value not present or array is null.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (!array)
		return (-1);

	return (interpolationSearch(array, low, high, value));
}
