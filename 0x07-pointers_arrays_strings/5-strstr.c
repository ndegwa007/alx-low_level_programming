#include "main.h"

/**
 * _strstr - finds the first occurrence of needle in haystack
 * @haystack: string
 * @needle: substring
 * Return: pointer to the substring
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int l;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (l = i, j = 0; needle[j] != '\0'; l++, j++)
		{
			if (needle[j] != haystack[l] ||  haystack[l] == '\0')
			{
				break;
			}

		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
