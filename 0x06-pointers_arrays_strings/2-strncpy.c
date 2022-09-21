#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a str
 * @dest: str1
 * @src: str to be copied
 * @n: number of runs
 *
 * Return: dest str
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
