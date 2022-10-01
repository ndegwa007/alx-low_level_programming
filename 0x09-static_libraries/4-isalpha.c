#include "main.h"

/**
 * _isalpha - checks if c is an alphabet lowercase or upper
 * @c: args checker
 *
 * Return: 0 if false and 1 if true
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) ||  (c > 96  && c < 123))
		return (1);
	else
		return (0);
}
