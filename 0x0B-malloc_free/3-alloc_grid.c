#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a to 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL on failure, on success a double pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **z;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	z = (int **)malloc(height * sizeof(int *));
	if (z == NULL)
	{
		free(z);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		z[x] = (int *)malloc(width * sizeof(int));
		if (z[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(z[y]);
			free(z);
			return (NULL);
		}
	}	
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{	
			z[x][y] = 0;
		}	
	}
	return (z);
}
