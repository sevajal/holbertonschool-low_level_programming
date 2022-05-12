#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the index of a dlistint_t.
 * @head: pointer to the head of the dlistint_t list.
 * @index: index of the list where the node should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = *head;
	unsigned int i;

	if (head && *head)
	{
		for (i = 0; i < index; i++)
		{
			if (del->next == NULL)
				return (-1);
			del = del->next;
		}
		if (index == 0)
			*head = (*head)->next;
		if (del->next != NULL)
			del->next->prev = del->prev;
		if (del->prev != NULL)
			del->prev->next = del->next;
		free(del);
		return (1);
	}
	return (-1);
}
