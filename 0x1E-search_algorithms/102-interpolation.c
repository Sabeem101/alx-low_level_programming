#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 *				using the Interpolation search algorithm.
 * @array: pointer to the first element of the array to search.
 * @size: number of the array elements.
 * @value: the value to search for.
 * Return: the first index where the value is located, else NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t h, l, x;

	if (array == NULL)
	{
		return (-1);
	}
	for (l = 0, h = size - 1; h >= 1;)
	{
		x = l + (((double)(h - 1) / (array[h] - array[l])) * (value - array[l]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			h = x - 1;
		else
			l = x + 1;
	}
	return (-1);
}
