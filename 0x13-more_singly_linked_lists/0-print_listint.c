#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: Pointer to the listint_t head.
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
