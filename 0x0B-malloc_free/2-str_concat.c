#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory, or NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, d;
	char *z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	c = a + b + 1;
	z = malloc(c * sizeof(char));
	if (z == NULL)
	{
		return (NULL);
		free(z);
	}
	for (d = 0; d < a; d++)
		z[d] = s1[d];
	for (d = 0; d < b; d++)
		z[d + a] = s2[d];
	z[a + b] = '\0';

	return (z);
	free(z);
}
