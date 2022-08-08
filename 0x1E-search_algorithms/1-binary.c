#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the index where value is located.
 * -1 if value not present or array is null.
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned long int left = 0, right = size - 1, middle, index;

	if (!array)
		return (-1);

	while (left <= right)
	{
		index = left;
		printf("Searching in array: %ld", index);
		for (index++; index <= right; index++)
			printf(", %ld", index);
		printf("\n");
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
