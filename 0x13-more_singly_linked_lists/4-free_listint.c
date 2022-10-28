#include "lists.h"

/**
 * free_listint - function frees a linked list
 * @head: pointer to the head
 *
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
