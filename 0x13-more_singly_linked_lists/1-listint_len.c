#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the node
 *
 * Return: element count
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
