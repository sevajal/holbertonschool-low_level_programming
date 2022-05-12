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
		new = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;

		if (idx == 0)
		{
			new->next = *h;
			new->prev = NULL;
			if ((*h) != NULL)
				(*h)->prev = new;
			(*h) = new;
			return (*h);
		}

		for (i = 0; i < idx - 1 && tmp; i++)
			tmp = tmp->next;
		if ((tmp == NULL && idx > 0) || (int)idx < 0)
			return (NULL);
		new->next = tmp->next;
		tmp->next = new;
		new->prev = tmp;
		if (new->next != NULL)
			new->next->prev = new;
		return (new);
	}
	return (NULL);
}
