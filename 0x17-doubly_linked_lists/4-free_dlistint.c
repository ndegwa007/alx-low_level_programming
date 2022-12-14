#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: ptr to the head node
 *
 * Return: None
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		dlistint_t *nextNode = curr->next;

		free(curr);
		curr = nextNode;
	}
}

