#include "lists.h"

/**
 * dlistint_len - returns number of elements in dlistint_t
 * @h: dlistint_t pointer
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter += 1;
	}
	return (counter);
}
