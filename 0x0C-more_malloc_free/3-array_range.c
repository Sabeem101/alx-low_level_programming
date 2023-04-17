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
	for (a = 0; min <= max; a++, min++)
	{
		x[a] = min;
	}
	return (x);
}
