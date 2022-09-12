#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int a = 0;

	int b;

	for (; a <= 98; a++)
	{
		b = a + 1;
		for (; b <= 99; b++)
		{
			putchar(a / 10 % 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 % 10 + '0');
			putchar(b % 10 + '0');

			if (a == 98 && b == 99)
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
	return (0);
}
