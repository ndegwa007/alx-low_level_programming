#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - joins two strings to one
 * @dest: str1
 * @src: str2
 * Return: return pointer to dest
 */


char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (i = strlen(dest); src[j] != '\0'; i++)
	{
		dest[i] = src[j]; /* copying src to dest */
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
