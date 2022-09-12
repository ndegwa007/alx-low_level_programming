#include <stdio.h>
/**
 * main - prints all the alphabet in lowercase except for q and e
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
