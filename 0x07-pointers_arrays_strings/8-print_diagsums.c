#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a square
 *			matrix of integers
 * @a: matrix
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, sum_1 = 0, sum_2 = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size + 1) == 0)
		{
			sum_1 += *(a + x);
		}
		if (x % (size - 1) == 0 && x != 0 && x < size * size -1)
		{
			sum_2 += *(a + x);
		}
	}
	printf("%d, %d\n", sum_1, sum_2);
}
