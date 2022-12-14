#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint_t
 * @h: pointer to dlistint_s
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i += 1;
	}
	return (i);
}
