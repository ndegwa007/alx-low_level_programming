#include "main.h"

/**
 * _strspn - returns nuumber of bytes in s that consist only a
 * @s: str
 * @accept: str
 * Return: int
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int l = 0;

	for (i = 0; s[i] != '\0';  i++)
	{
		for (j = 0; accept[j] !=  '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (l);
	}
	return (l);
}

