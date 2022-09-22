#include "main.h"

/**
 * leet - a function that encodes a string to 1337
 * @str: string
 * Return: str
 */


char *leet(char *str)
{
	int i = 0, j = 0;

	char s[] = "a4e3o0t7l1";

	while (s[i] != '\0')
	{
		for (; j < 10; j += 2)
		{
			if (str[i] == s[j] || str[i] == s[j] - 32)
			{
				str[i] = s[j + 1];
			}
		}
		i++;
	}
	return (str);
}
