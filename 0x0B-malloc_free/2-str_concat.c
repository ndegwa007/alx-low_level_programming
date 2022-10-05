#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concat 2 strings via the allocated memory
 * @s1: string1 pointer
 * @s2: string2 pointer
 * Return: pointer to the concat string
 **/

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i])
		i += 1;
	while (s2[j])
		j += 1;
	p = malloc((i + j) * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	while (*s1)
	{
		p[k] = *s1;
		s1++;
		k += 1;
	}
	while (*s2)
	{
		p[k] += *s2;
		s2++;
		k += 1;
	}
	return (p);
}
