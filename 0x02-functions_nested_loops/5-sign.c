#include "main.h"

/**
 * print_sign - checks if int n is +ve or -ve
 * @n: checked arg
 *
 * Return: 1 if +ve and 0 if zero and -1 if -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
