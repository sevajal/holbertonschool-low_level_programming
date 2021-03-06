#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Double pointer to the listint_t head.
 * @idx: index of the list where the new node should be added.
 * @n: the value of the node to be added.
 * Return: the address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at index idx, return NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *tmp = *head;

	if (head)
	{
		if (idx < 1)
		{
			new = (listint_t *)malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = *head;
			*head = new;
			return (new);
		}

		for (i = 0; i < idx - 1; i++)
		{
			if (tmp->next == NULL)
				return (NULL);
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
		new = (listint_t *)malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}
	return (NULL);
}
