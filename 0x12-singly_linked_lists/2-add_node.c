#include "lists.h"
#include "string.h"
#include <stdlib.h>

/**
 * add_node - add a new node at the beginning of a linked lists
 * @head: double pointer to the first node
 * @str: string to be added to the linked list
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);

	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(ptr->str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
