#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, and initializes it
 *			with a specific char
 * @size: array size
 * @c: character
 *
 * Return: NULL if size = 0 or pointer to the array or NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y = malloc(sizeof(char) * size);

	if (size < 1 || y == NULL)
		return (NULL);

	for (x = 0; x <= size; x++)
		y[x] = c;

	return (y);

	free(y);
}
