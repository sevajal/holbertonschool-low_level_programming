#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the dlistint_t list.
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
