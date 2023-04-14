#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int *x, a;

	if (min > max)
	{
		return (NULL);
	}
	x = malloc((max - min + 1) * sizeof(int));
	if (x == NULL)
	{
		return (NULL);
	}
	while (a <= max - min)
	{
		x[a++] = min++;
	}
	return (x);
}
