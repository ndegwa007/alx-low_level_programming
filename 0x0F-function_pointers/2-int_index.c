#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array with integers
 * @size: size of array
 * @cmp: pointer to array
 * Return: index of the matching int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool x;

	if (array != NULL && cmp != NULL)
	{
		if (size  <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x == TRUE)
			{
				return (i);
			}
		}
	}
}
