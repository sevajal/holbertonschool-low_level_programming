#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: Pointer to the listint_t head.
 * Return: the number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
