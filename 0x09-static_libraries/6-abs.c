#include "main.h"

/**
 * _abs - prints the abs value of a number
 * @i: arg check
 *
 * Return: 0 if i == 0 and abs num if i != 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		return (i);
	}
}
