#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - print string followed by a new line
 * @n: number of strings
 * @separator: string to be printed between strings
 *
 * Return: if one of the strings in null prints nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int x;
	char *str;

	va_start(strings, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", str);
		}
		if (x + 1 < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
