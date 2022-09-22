#include "main.h"

/**
 * leet - a function that encodes a string to 1337
 * @str: string
 * Return: str
 */


char *leet(char *str)
{
	int i = 0;
	int j;

	char s[] = "a4e3o0t7l1";

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j += 2)
		{
			if (str[i] == s[j] || str[i] == s[j] - 32)
			{
				str[i] = s[j + 1];
				break;
			}
		}
		i++;
	}
	return (str);
}
