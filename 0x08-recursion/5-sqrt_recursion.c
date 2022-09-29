#include "main.h"

/**
 * _sqrt_recursion - returns sqrt of num
 * @n: number int
 *
 * Return: sqrt
 **/

int _sqrt_recursion(int n)
{
	return (sqrt_num(n, 1));
}

/**
 * sqrt_num - get sqrt recursively
 * @x: int
 * @y: int
 *
 * Return: -1 or sqrt of x
 **/

int sqrt_num(int x, int y)
{
	int s = y * y;

	if (s > x)
		return (-1);
	if (s == x)
		return (y);
	return (sqrt_num(x, y + 1));
}
