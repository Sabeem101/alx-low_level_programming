#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 * 
 * Return: pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int w = 0, y = 0, z1 = 0, z2 = 0;

	while (s1 && s1[z1])
		z1++;
	while (s2 && s2[z2])
		z2++;

	if (n < z2)
		x = malloc(sizeof(char) * (z1 + n + 1));
	else
		x = malloc(sizeof(char) * (z1 + z2 + 1));

	if (x == NULL)
		return (NULL);

	if (w < z1)
	{
		x[w] = s1[w];
		w++;
	}

	while (x < s2 && w < (z1 + n))
		x[w++] = s2[y++];

	while (x >= s2 && w < (z1 + z2))
		x[w++] = s2[y++];

	x[w] = '\0';

	return (x);
}
