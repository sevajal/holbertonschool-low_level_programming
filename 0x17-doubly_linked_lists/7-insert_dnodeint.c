#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of the dlistint_t list.
 * @idx: index of the list where the new node should be added.
 * @n: data to be included in the new node.
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *tmp = *h;

	if (h)
	{
		if (idx == 0)
			add_dnodeint(h, n);

		for (i = 0; i < idx - 1; i++)
		{
			if (tmp->next == NULL)
				return (NULL);
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
		new = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = tmp->next;
		tmp->next = new;
		new->prev = tmp;
		if (new->next != NULL)
			new->next->prev = new;
		return (new);
	}
	return (NULL);
}
