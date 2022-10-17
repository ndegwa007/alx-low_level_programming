#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two ints
 * @a: int
 * @b: int
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract b from a
 * @a: int
 * @b: int
 * Return: a minus b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - print product of a and b
 * @a: int
 * @b: int
 * Return: a times b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_dic - print a divided by b
 * @a: int
 * @b: int
 * Return: a divided by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - print a modulo  b
 * @a: int
 * @b: int
 * Return: a modulo b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
