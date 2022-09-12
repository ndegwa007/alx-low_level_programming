#include <stdio.h>

/**
 * main - main function prints numbers
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
