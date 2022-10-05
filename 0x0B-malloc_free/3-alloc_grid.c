#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to 2 dimensional array of int
 * @width: int
 * @height: int
 * Return: return a pointer to the array else return NULL
 **/

int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		p[i][j] = 0;
	return (p);
}
