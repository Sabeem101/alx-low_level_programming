#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog
 * @name: name
 * @age: age
 * @owner: owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
