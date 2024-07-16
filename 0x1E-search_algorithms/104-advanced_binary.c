#include "search_algos.h"
/**
 * adv_recursive - Searches recursively for a value in a sorted array
 *			of integers using Binary search.
 * @array: Pointer to the first element of the array to search.
 * @left: Starting index of the array to search.
 * @right: Ending index of the array to search.
 * @value: Value to search for.
 * Return: Index where the value is located, if not , then NULL.
 */
int adv_recursive(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (right < left)
	{
		return (-1);
	}
	printf("Searching in array: ");
	for (x = left; x < right; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);

	x = left + (right - left) / 2;
	if (array[x] == value && (x == left || array[x - 1] != value))
		return (x);
	if (array[x] >= value)
		return (adv_recursive(array, left, x, value));
	return (adv_recursive(array, x + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the aray to search.
 * @size: Number of array elements.
 * @value: Value to search for.
 * Return: Index where the value is located, if not, then NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (adv_recursive(array, 0, size - 1, value));
}
