#include "lists.h"

/**
 * list_len - return number of element in a linked list
 * @h: pointer to the list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
