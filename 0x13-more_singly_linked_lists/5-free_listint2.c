#include "lists.h"

/**
 *
 * free-listint2 - frees a linked list and sets head to NULL
 * @**head: double pointer to the head
 *
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	else
		return;

}
