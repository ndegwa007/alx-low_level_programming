#include "main.h"

/**
 * _islower - checks for a lowercase ch
 * @c:  variable checker
 * Return: 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
