#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: 0 if equal, +ve if s1 is greater & -ve viceversa
 */

int _strcmp(char *s1, char *s2)
{
	int s1_size = strlen(s1);
	int s2_size = strlen(s2);

	if (s1_size >  s2_size)
	{
		return (15);
	}
	else if (s1_size == s2_size)
	{
		return (0);
	}
	else
	{
		return (-15);
	}
}
