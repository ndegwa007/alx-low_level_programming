#include "lists.h"
/**
 * get_dnodeint_at_index - get nth node of a doubly linked lists
 * @head: pointer to the head node
 * @index: nth node index
 *
 * Return: nodes at the nth index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}
	return (current);
}
