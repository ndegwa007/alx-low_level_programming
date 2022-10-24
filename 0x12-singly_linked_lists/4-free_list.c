#include "lists.h"

/**
 * free_list - frees linked list
 * @head: linked list to be freed
 *
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	head = NULL;
}
