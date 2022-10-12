#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;
	int i, j, l, k;

	i = 0;
	j = 0;
	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
		return (NULL);
	if (name != NULL)
	{
		while (name[i] != '\0')
			i += 1;
	}
	if (owner != NULL)
	{
		while (owner[j] != '\0')
			j += 1;
	}
	_dog->name = malloc(i * sizeof(char) + 1);
	if (_dog->name == NULL)
	{
		free(_dog);
		return (NULL);
	}
	_dog->owner = malloc(j * sizeof(char) + 1);
	if (_dog->owner == NULL)
	{
		free(_dog->name);
		free(_dog);
		return (NULL);
	}
	for (l = 0; l < i; l++)
		_dog->name[l] = name[l];
	for (k = 0; k < j; k++)
		_dog->owner[k] = owner[k];
	_dog->name[l] = '\0';
	_dog->owner[k] = '\0';
_dog->age = age;
return (_dog);
}
