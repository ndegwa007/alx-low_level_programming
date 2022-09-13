#include "main.h"

/**
 * print_alphabet_x10- print the alphabets 10 times
 * Description: prints the alphabets X10 on newline
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

