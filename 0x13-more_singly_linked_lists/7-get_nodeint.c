#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the listint_t head.
 * @index: index to be returned.
 * Return: the nth node of a listint_t linked list
 * or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		for (i = 0; i < index; i++)
		{
			if (head->next == NULL)
				return (NULL);
			head = head->next;
		}
		if (head == NULL)
			return (NULL);
		else
			return (head);
	}
	return (NULL);
}
