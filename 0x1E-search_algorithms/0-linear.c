#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers using
 *			the Linear search algorithm.
 * @array: pointer to the first element of the array to search.
 * @size: number of elements in the array.
 * @value: value to search for.
 * Return: the first index where the value is located, if not then null.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
