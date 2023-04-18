#include <stdlib.h>
#include "dog.h"

char *_doggo_copy(char *d);

/**
 * _doggo_copy - makes copy of an argument
 * @d: data to make a copy from
 *
 * Return: copy
 */

char *_doggo_copy(char *d)
{
	int x, y;
	char *z;

	if (d == NULL)
	{
		return (NULL);
	}
	for (x = 0; d[x] != '\0'; x++)
		;
	z = malloc(sizeof(char) * (x + 1));
	if (z == NULL)
	{
		return (NULL);
	}
	for (y = 0; d[x] != '\0'; y++)
	{
		z[y] = d[y];
	}
	z[y] = '\0';
	return (z);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *doggo_name, *doggo_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	{
		return (NULL);
	}
	doggo_name = _doggo_copy(name);
	if (doggo_name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	(*doggo).name = name;

	(*doggo).age = age;

	doggo_owner = _doggo_copy(owner);
	if (doggo_owner == NULL)
	{
		free((*doggo).name);
		free(doggo);
		return (NULL);
	}
	(*doggo).owner = doggo_owner;
	return (doggo);
}
