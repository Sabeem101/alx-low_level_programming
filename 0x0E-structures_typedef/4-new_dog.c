#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: struct dog.
 *          if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int x, doggo_name, doggo_owner;

	doggo = malloc(sizeof(doggo));
	if (doggo == NULL || !(name) || !(owner))
	{
		free(doggo);
		return (NULL);
	}
	for (doggo_name = 0; name[doggo_name]; doggo_name++)
		;
	for (doggo_owner = 0; owner[doggo_owner]; doggo_owner++)
		;

	doggo->name = malloc(doggo_name + 1);
	doggo->owner = malloc(doggo_owner + 1);

	if (!(doggo->name) || !(doggo->owner))
	{
		free(doggo->owner);
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	for (x = 0; x < doggo_name; x++)
		doggo->name[x] = name[x];

	doggo->name[x] = '\0';
	doggo->age = age;

	for (x = 0; x < doggo_owner; x++)
		doggo->owner[x] = owner[x];
	doggo->owner[x] = '\0';
	return (doggo);
}
