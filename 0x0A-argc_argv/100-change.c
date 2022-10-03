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
	int amt = atoi(argv[1]);
	int i = 0;

	while (amt > 0)
	{
		if (amt >= 25)
		{
			amt -= 25;
			i += 1;
		}
		else if (amt >= 10)
		{
			amt -= 10;
			i += 1;
		}
		else if (amt >= 5)
		{
			amt -= 5;
			i += 1;
		}
		else if (amt >= 2)
		{
			amt -= 2;
			i += 1;
		}
		else
		{
			amt -= 1;
			i += 1;
		}
	}
	printf("%d\n", i);
	return (0);
}
