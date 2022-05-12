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

	if (h && *h)
	{
		for (i = 0; i < idx; i++)
		{
			if (tmp->next == NULL)
				return (NULL);
			tmp = tmp->next;
		}
		new = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		if (tmp->prev != NULL)
			tmp->prev->next = new;
		else
			*h = new;
		new->prev = tmp->prev;
		tmp->prev = new;
		new->next = tmp;
		return (new);
	}
	return (NULL);
}
