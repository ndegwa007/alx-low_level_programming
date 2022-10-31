#include "lists.h"

/**
 *
 * free_listint2 - free a linked list and sets head to NULL
 *
 * @**head: pointer to *head
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *dummy;

	if (*head != NULL)
	{
		temp = *head;

		while ((dummy = temp) != NULL)
		{
			temp = temp->next;
			free(temp);
		}
		*head = NULL;
}
