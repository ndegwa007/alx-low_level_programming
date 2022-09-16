#include <stdio.h>

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

	for (j = 1; j <= i; j++)
	{
		if (j % 3 == 0)
		{
			printf("%s ", str);
		}
		else if (j % 5 == 0)
		{
			printf("%s ", strb);
		}
		else
		{
			printf("%d ", j);
		}
	}
	printf("\n");
}
