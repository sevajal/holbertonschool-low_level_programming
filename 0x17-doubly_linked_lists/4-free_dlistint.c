#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: Pointer to the dlistint_t head.
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}
