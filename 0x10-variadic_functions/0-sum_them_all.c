#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns sum of all parameters
 * @n: parameters
 *
 * Return: 0 if n == 0, else return n
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int y, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(x, n);

	for (y = 0; y < n; y++)
	{
		sum += va_arg(x, int);
	}
	va_end(x);
	return (sum);
}
