#include "main.h"

/**
 * print-alphabet_x10 - print the alphabets 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		for (char j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
	
}

