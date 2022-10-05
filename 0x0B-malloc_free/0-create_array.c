#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: int
 * @c: char
 *
 * Return: pointer to array
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
