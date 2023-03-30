#include "main.h"

/**
 * reverse_array - reverse the content pf an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int B, C;

	for (B = 0; B < (n / 2); B++)
	{
		C = a[B];
		a[B] = a[n - B - 1];
		a[n - B - 1] = C;
	}
}
