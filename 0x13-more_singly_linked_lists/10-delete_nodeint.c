#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position.
 * @head: Double pointer to the listint_t head.
 * @index: index of the list where the node should be removed.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *delete;
	unsigned int i;

	if (head || tmp)
	{
		if (index == 0)
		{
			delete = *head;
			*head = (*head)->next;
			free(delete);
			return (1);
		}
		for (i = 0; i < index - 1; i++)
		{
			if (tmp->next == NULL)
				return (-1);
			tmp = tmp->next;
		}
		delete = tmp->next;
		tmp->next = delete->next;
		free(delete);
		return (1);
	}
	return (-1);
}
