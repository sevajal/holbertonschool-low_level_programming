#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the index of a dlistint_t.
 * @head: pointer to the head of the dlistint_t list.
 * @index: index of the list where the node should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *delete;
	unsigned int i;

	if (head && *head)
	{
		if (index < 1)
		{
			delete = *head;
			*head = (*head)->next;
			free(delete);
			return (1);
		}
		for (i = 0; i < index; i++)
		{
			if (tmp->next == NULL)
				return (-1);
			tmp = tmp->next;
		}
		delete = tmp;
		if (delete->next != NULL)
			delete->next->prev = tmp->prev;
		delete->prev->next = tmp->next;
		free(delete);
		return (1);
	}
	return (-1);
}
