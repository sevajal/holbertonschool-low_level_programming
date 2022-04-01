#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: Double pointer to the listint_t head.
 * The function sets the head to NULL.
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (head)
	{
		while ((current = *head))
		{
			*head = (*head)->next;
			free(current);
		}
		*head = NULL;
	}
}
