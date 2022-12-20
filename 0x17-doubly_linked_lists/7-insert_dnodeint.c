#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: double ptr to head node ptr
 * @idx: index at which new node is added
 * @n: data to be added
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *curr = (*h);


	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	newNode->n = n;

	if ((*h) == NULL)
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		(*h) = newNode;
		return (*h);
	}

	for (i = 0; i < idx; i++)
	{
		if (curr == NULL)
		{
			return (NULL);
		}
		curr = curr->next;
	}

	newNode->prev = curr;
	newNode->next = curr->next;

	if (curr->next != NULL)
	{
		curr->next->prev = newNode;
	}
	curr->next = newNode;
	return (newNode);
}
