#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory,
 *		which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: pointer to space in memory or NULL
 */

char *_strdup(char *str)
{
	unsigned int x, y;
	char *z;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
		;
	x++;
	z = malloc(x * sizeof(char));
	if (z == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < x; y++)
	{
		z[y] = str[y];
	}
	return (z);
	free(z);
}
