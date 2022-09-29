#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: int
 *
 * Return: 0 or 1
 **/

int is_prime_number(int n)
{
	return (prime_or_not(n, 2));
}

/**
 * prime_or_not - returns 1 if prime and 0 if not @x: int
 * @x: int
 * @i: int counter
 *
 * Return: 0 or 1
 **/

int prime_or_not(int x, int i)
{
	if (x <= 2)
		return ((x == 2) ? 1 : 0);
	if (x % i == 0)
		return (0);
	if (i * i > x)
		return (1);
	return (prime_or_not(x, i + 1));
}
