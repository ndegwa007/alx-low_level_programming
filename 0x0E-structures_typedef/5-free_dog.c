#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the memory that dog occupies
 * @d: dog data
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
