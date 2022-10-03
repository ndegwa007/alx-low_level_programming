#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum amount of coins to make change for amount of money
 * @argc: argv count
 * @argv: array
 *
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int cents = atoi(argv[1]);
	int i = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			i += 1;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			i += 1;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			i += 1;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			i += 1;
		}
		else
		{
			cents -= 1;
			i += 1;
		}
	}
	printf("%d\n", i);
	return (0);
}
