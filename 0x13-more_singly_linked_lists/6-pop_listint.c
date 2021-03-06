#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: Double pointer to the listint_t head.
 * Return: the head node’s data (n) or 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head)
	{
		n = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		tmp->next = NULL;
		free(tmp);
		return (n);
	}
	return (0);
}
