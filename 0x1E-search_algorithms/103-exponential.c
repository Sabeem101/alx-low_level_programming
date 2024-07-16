#include "search_algos.h"
/**
 * binarysearch - Searches for a value in a sorted array of integers using
 *			Binary search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @left: Starting index of the array to search.
 * @right: Ending index of the array to search.
 * @value: Value to search for.
 * Return: Index where the value is located, if not, then NULL.
 */
int binarysearch(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}
	while (right >= left)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right = x - 1;
		else
			left = x + 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *			using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of the array elements.
 * @value: Value to search for.
 * Return: The first index where the value is located, if not then NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t r, x = 0;

	if (array == NULL)
	{
		return (-1);
	}
	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}
	r = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, r);
	return (binarysearch(array, x / 2, r, value));
}
