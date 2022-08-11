#include "search_algos.h"
#include <math.h>

/**
 * jump_node - found the next block to search.
 * @list: pointer to the list.
 * @jump: index to advance.
 * Return: pointer to the next block.
 */
listint_t *jump_node(listint_t *list, size_t jump)
{
	while (list->next && list->index < jump)
	{
		list = list->next;
	}
	return (list);
}

/**
 * jump_list - searches for a value in a sorted list
 * of integers using the Jump search algorithm.
 * @list: pointer to the head of the list to search in.
 * @size: the number of nodes in list.
 * @value: the value to search for.
 * Return: pointer to the first node where value is located.
 * NULL If value is not present in head or if head is NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, sumjump;
	listint_t *prev = list, *l_jump = list;

	if (!list)
		return (NULL);
	jump = floor(sqrt(size));
	sumjump = jump;
	l_jump = jump_node(list, jump);
	while (l_jump && l_jump->n < value && sumjump < size)
	{
		printf("Value checked at index [%li] = [%d]\n", l_jump->index, l_jump->n);
		prev = l_jump;
		l_jump = jump_node(prev, sumjump += jump);
	}
	printf("Value checked at index [%li] = [%d]\n", l_jump->index, l_jump->n);
	printf("Value found between indexes [%li] and [%li]\n",
	prev->index, l_jump->index);

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
