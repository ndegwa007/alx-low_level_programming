#include "search_algos.h"

/**
 * binary_search - searches for a value using the Binary Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of the value searched for, or -1 if not found
 */


int binary_search(int *array, size_t size, int value)
{
	size_t low, mid, i, high;
	int found = 0;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);

			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			found = 1;
			break;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	return (found ? (int)mid : -1);
}
