#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list.
 * @head: pointer to the dlistint_t head.
 * @index: index to be returned.
 * Return: nth node of a dlistint_t list or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
