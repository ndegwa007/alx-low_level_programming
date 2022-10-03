#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds the argc arguments
 * @argc: argv count
 * @argv: str items
 *
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int i, j;
	int count = 0;


	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] == '-')
		{
			for (j = 1; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		else
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		count += atoi(argv[i]);
	}
	printf("%d\n", count);
	return (0);

}
