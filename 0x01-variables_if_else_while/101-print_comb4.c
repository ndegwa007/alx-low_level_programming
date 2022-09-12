#include <stdio.h>

/**
 * main - looping through variables x,y and z, printing the sum
 *
 * Return: 0
 */

int main(void)
{
	int x = '0';

	int y;

	int z;

	for ( ; x <= '7'; x++)
	{
		y = x + 1;

		for ( ; y <= '8'; y++)
		{
			z = y + 1;

			for ( ; z <= '9'; z++)
			{
				putchar(x);

				putchar(y);

				putchar(z);

				if (x == '7' && y == '8' && z == '9')
				{
					putchar('\n');

				}
				else
				{
					putchar(',');

					putchar(' ');
				}
			}
		}
	}
	return (0);

}
