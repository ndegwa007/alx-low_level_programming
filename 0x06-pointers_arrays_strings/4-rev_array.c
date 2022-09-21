#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array of ints
 * @a: an array of ints
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - 1 - i];

		a[n - 1 - i] = temp;
	}
}
