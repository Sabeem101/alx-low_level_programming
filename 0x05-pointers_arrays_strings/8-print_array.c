#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 *
 * @a: input string.
 * @n: input elements.
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int str;

	for (str = 0; str < n; str++)
	{
		if (str != (n - 1))
			printf("%d, ", a[str]);
		else
			printf("%d", a[str]);
	}
	printf("\n");
}
