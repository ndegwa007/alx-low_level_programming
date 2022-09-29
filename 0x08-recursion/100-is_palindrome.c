#include "main.h"


/**
 * is_palindrome - check if a string is a palindrome
 * @s: string
 *
 * Return: 1 or 0
 **/

int is_palindrome(char *s)
{
	int x = 0;

	return (checker(s, x, strrlen(s) - 1));
}

/**
 * checker - checks out a reverse string
 * @str: string
 * @l: int
 * @r: int
 *
 * Return: 0 or 1
 **/

int checker(char *str, int l, int r)
{
	if (*str == '\0')
		return (1);
	if (l < 0 || r < 0)
		return (0);
	if (l >= r)
		return (1);
	if (str[l] == str[r])
		return (checker(str, l + 1, r - 1));
	return (0);
}

/**
 * strrlen - return str length
 * @str: string
 *
 * Return: string length
 **/

int strrlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strrlen(s + 1));
}
