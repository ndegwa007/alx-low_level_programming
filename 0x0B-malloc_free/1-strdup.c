#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocate memory to a copy of the str
 * @str: string
 *
 * Return: pointer to the string
 **/

char *_strdup(char *str)
{
	char *string;
	int i;
	int j;

	j = 0;
	i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i += 1;
	string = malloc(i * sizeof(char) + 1);

	if (string == NULL)
		return (NULL);

	while (*str)
	{
		string[j] = *str;
		str++;
		j += 1;
	}
	string[j] = *str;
	return (string);
}
