#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: int array
 * @size: size of array
 *
 * Return: pointer to array;
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i;

	p = malloc(nmemb * size);

	if ((nmemb ==  0) || (size == 0))
		return (NULL);
	if (!p)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
