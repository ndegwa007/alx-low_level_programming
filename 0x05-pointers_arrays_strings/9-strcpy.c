#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the str pointed to by *src
 * @src: source string
 * @dest: destination
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	j++;

	return (dest);
}
