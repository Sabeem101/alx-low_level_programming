#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *			on each element of an array
 * @array: pointer to integer
 * @size: array size
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action != NULL && array != NULL)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
