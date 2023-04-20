#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: struct dog.
 *	if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int x, d_name, d_owner;

	doggo = malloc(sizeof(doggo));
	if (doggo == NULL || !(name) || !(owner))
	{
		free(doggo);
		return (NULL);
	}
	for (d_name = 0; name[d_name]; d_name++)
		;

	for (d_owner = 0; owner[d_owner]; d_owner++)
		;

	doggo->name = malloc(d_name + 1);
	doggo->owner = malloc(d_owner + 1);

	if (!(doggo->name) || !(doggo->owner))
	{
		free(doggo->owner);
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	for (x = 0; x < d_name; x++)
		doggo->name[x] = name[x];
	doggo->name[x] = '\0';

	doggo->age = age;

	for (x = 0; x < d_owner; x++)
		doggo->owner[x] = owner[x];
	doggo->owner[x] = '\0';

	return (doggo);
}
