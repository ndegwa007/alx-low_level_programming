#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - select the right function to perform operator given
 * @s: char operator
 * Return: pointer to the right function operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*ops[i].op == *s && s[0] != '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
