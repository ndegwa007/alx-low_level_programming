#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of a dlistint_t
 * @head: double ptr to head
 * @n: int n
 *
 * Return: address of new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if ((*head) == NULL)
	{
		newNode->prev = (*head);
		(*head) = newNode;
	}
	else
	{

		dlistint_t *lastNode = (*head);

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return ((*head));

}
