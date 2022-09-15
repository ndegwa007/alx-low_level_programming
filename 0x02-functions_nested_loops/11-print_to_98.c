#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print an int upto 98
 * @n: arg int
 *
 * Description: prints all ints up to 98
 */

void print_to_98(int n)
{
	int k = 98;

	if (n < k)
	{
		for (; n <= k; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > k)
	{
		for (; n >= k; n--)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
