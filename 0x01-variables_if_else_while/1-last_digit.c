#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - main function checking value n
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* Code here */
	if (n > 5)
	{
		printf("%d and is greater than 5", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("%d and is less than 6 and not 0", n);
	}
	else
	{
		printf("%d and is 0", n);
	}

	return (0);
}
