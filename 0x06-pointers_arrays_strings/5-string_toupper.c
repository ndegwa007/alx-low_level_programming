#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change string case to upper
 * @s: str
 *
 * Return: upper str
 */

char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] = s[c] - 32;
		}
		c++;
	}
	return (s);
}
