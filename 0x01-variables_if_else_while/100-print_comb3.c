#include <stdio.h>

/**
 * main - loop through vaiables x and y, printing digits
 *
 * Return: print to stdout all possible combination of two digits
 *
 */

int main(void)
{
	int x = '0';

	int y;

	while (x <= '9')
	{
		y = x + 1;

		while (y <= '9')
		{
			putchar(x);
			putchar(y);

			if (x == '8' && y == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	return (0);
}
