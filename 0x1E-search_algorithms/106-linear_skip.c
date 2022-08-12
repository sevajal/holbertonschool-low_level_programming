#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - searches for a value in sorted skip list of integers.
 * @list: pointer to the head of the list to search in.
 * @value: the value to search for.
 * Return: pointer to the first node where value is located.
 * NULL If value is not present in head or if head is NULL.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = list, *l_jump;

	if (!list)
		return (NULL);

	l_jump = list->express;
	while (l_jump && l_jump->n < value && l_jump->express)
	{
		printf("Value checked at index [%li] = [%d]\n", l_jump->index, l_jump->n);
		prev = l_jump;
		l_jump = l_jump->express;
	}
	printf("Value checked at index [%li] = [%d]\n", l_jump->index, l_jump->n);
	if (l_jump->n > value)
		printf("Value found between indexes [%li] and [%li]\n",
		prev->index, l_jump->index);
	else
	{
		prev = l_jump;
		while (l_jump->next)
			l_jump = l_jump->next;
		printf("Value found between indexes [%li] and [%li]\n",
		prev->index, l_jump->index);
	}
	while (prev->n < value && prev->next)
	{
		printf("Value checked at index [%li] = [%i]\n", prev->index, prev->n);
		prev = prev->next;
	}
	printf("Value checked at index [%li] = [%i]\n", prev->index, prev->n);
	if (prev->n == value)
		return (prev);
	return (NULL);
}
