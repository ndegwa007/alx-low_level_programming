#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concat two strings
 * @dest: str1
 * @src: str2
 * @n: steps to run
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_size = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_size + i] = src[i];
	}
	dest[dest_size + i] = '\0';
	return (dest);
}

