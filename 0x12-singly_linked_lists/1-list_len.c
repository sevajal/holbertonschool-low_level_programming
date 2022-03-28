#include "lists.h"

/**
 * list_len -   returns the number of elements in a linked list_t list.
 * @h: pointer to head.
 * Return:  the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
