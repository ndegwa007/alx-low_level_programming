#include "lists.h"

/**
 * sum_dlistint - sums up all the data of a double linked lists
 * @head: head ptr node
 *
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
