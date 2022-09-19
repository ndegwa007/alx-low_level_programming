#include "main.h"

/**
 * swap_int - swap two ints 
 * @a: int to be swapped
 * @b: int to be swapped
 *
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	
	*a = *b;
	*b = i;


}
