#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers using
 *			the Jump search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 * Return: the first index where the value is located, if not then NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, jump, x;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	step = sqrt(size);
	for (x = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		x = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", x, jump);
	jump = jump < size - 1 ? jump : size - 1;
	for (; x < jump && array[x] < value; x++)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	printf("Value checked array [%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
