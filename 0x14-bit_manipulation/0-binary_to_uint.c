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
	size_t i = 0;


	if (b == NULL)
		return (0);

	while (i < (strlen(b) - 1))
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		i++;
	}
	for (x = strlen(b) - 1; x >= 0; x--)
	{

		if (b[x] == '1')
		{
			decimal += base;
		}
		base *= 2;
	}

	return (decimal);
}
