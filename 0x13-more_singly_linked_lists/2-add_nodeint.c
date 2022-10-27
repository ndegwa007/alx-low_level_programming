#include "lists.h"

/**
 * add_nodeint - add node at the beginning of a linked list
 * @head: first node double pointer
 * @n: int
 *
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *curr;

	curr = malloc(sizeof(listint_t));

	/* First null check */

	if (head == NULL)
		return (NULL);

	curr->n = n;
	curr->next = *head;
	*head = curr;

	return (curr);
}
