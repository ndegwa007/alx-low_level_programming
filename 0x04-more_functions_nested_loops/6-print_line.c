#include "main.h"

/**
 * print_line - prints char - for a given number of times
 * @n: int number to print out -
 *
 * Description: prints - a number of times equal to the int given
 */

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
