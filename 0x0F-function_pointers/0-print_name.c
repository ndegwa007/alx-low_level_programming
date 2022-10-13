#include "function_pointers.h"

/**
 * print_name - function prints name
 * @name: name
 * @f: pointer to function printing name
 * Return: none
 **/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
