#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: string
 * @s2: string
 * @n: first n bytes of string2
 *
 * Return: pointer to s1 followed by first n bytes of s2
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i;
	int k;
	unsigned int j;

	i = 0;
	j = 0;
	k = 0;

	if ((s1 == NULL) || (s2 == NULL))
	{
		s1 == "";
		s2 == "";
	}
	while (s1[i])
		i += 1;
	p = malloc(i + n + 1);

	if (p == NULL)
		return (NULL);
	while (s1[k])
	{
		p[k] = s1[k];
		k += 1;
	}
	while (j < n)
	{
		p[k + j] = s2[j];
		j += 1;
	}
	p[k + j] = '\0';
	return (p);
}
