#include "main.h"

/**
 * _memcpy - copies n bytes from  mem area src to dest
 * @dest: char
 * @src: char
 * @n: unsigned int
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
