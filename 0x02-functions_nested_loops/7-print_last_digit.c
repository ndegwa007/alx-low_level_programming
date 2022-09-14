#include "main.h"

/**
 * print_last_digit - prints the last digit in an int
 * @n: int arg checker
 *
 * Return: last digits
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * (n % 10);
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n %= 10;
		_putchar(n + '0');
		return (n);
	}

}
