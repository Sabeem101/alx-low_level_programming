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
	unsigned int y, o, sz1, sz2;
	char *x;

	if (s1 == NULL)
		s1= "";

	if (s2 == NULL)
		s2= "";

	for (sz1 = 0; s1[sz1] != '\0'; sz1++)
		;

	for (sz2 = 0; s2[sz2] != '\0'; sz2++)
		;

	if (n > sz2)
		n = sz2;
	o = sz1 + n;
	x = malloc((o + 1) * sizeof(char));

	if (x == NULL)
		return (NULL);
	for( y = 0; y < o; y++)
		if(y < sz1)
		{
			x[y] = s1[y];
		}
		else
		{
			x[y] = s2[y - sz1];
		}
	x[y] = '\0';

	return (x);
}
