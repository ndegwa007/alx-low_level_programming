#include "lists.h"

/**
 * print_listint - print all elements of a listint_t
 * @h: pointer node head
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);

}
