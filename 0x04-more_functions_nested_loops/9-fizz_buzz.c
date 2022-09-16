#include <stdio.h>
#include "main.h"

/**
 * main - fizz buzz
 *
 * Return: fizzbuzz
 */

int main(void)
{
	int i = 100;

	int j;

	char str[] = "Fizz";

	char strb[] = "Buzz";
	char strfb[] = "FizzBuzz";

	for (j = 1; j <= i; j++)
	{
		if ((j % 3 == 0) && (j % 5 == 0))
		{
			printf("%s ", strfb);
		}
		else if (j % 5 == 0)
		{
			printf("%s ", strb);
		}
		else if (j % 3 == 0)
		{
			printf("%s ", str);
		}
		else
		{
			printf("%d ", j);
		}
	}
	printf("\n");
}
