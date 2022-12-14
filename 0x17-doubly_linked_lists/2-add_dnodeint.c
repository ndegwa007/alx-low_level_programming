#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning of dlistint_t
 * @head: double ptr to head node
 * @n: const int data
 *
 * Return: address of new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = malloc(sizeof(dlistint_t));

	current->n = n;
	current->prev = NULL;
	current->next = NULL;

	if (current == NULL)
	{
		return (NULL);
		free(current);
	}

	if ((*head) == NULL)
	{
		(*head) = current;
	}
	else if ((*head) != NULL)
	{
		(*head)->prev = current;
		current->next = (*head);
		(*head) = current;
	}

	return ((*head));
}
