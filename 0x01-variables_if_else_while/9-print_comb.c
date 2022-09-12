#include <stdio.h>

/**
 * main - entry point
 * @void - no args
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
