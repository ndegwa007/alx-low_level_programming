#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char arg binary
 *
 * Return: return the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int x, decimal = 0, base = 1;

	int slen = strlen(b);

	for (x = (slen - 1); x >= 0; x--)
	{
		if (b[x] == '1')
			decimal += base;
		base *= 2;
	}

	return (decimal);
}
