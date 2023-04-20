#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of integers
 * @separator: string to be printed
 *
 * Return: nothing if separator is NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int x;

	va_start(nums, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(nums, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
