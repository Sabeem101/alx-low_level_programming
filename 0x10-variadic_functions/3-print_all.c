#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

void print_char(va_list arg);
void print_integer(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * print_char - prints a character
 * @arg: arguments
 *
 * Return: void
 */

void print_char(va_list arg)
{
	char l;

	l = va_arg(arg, int);
	printf("%c", l);
}

/**
 * print_integer - prints an integer
 * @arg: arguments
 *
 * Return: void
 */

void print_integer(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints double
 * @arg: arguments
 *
 * Return: void
 */

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - prints a string
 * @arg: arguments
 *
 * Return: void
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything followed by a new line
 * @format: arguments
 *
 * Return: print (nil) if string is NULL
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int x = 0, y = 0;
	va_list args;
	prints_t funcs[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format != NULL && format[x] != '\0')
	{
		y = 0;

		while (y < 4)
		{
			if (format[x] == *funcs[y].dt)
			{
				printf("%s", separator);
				funcs[y].itprints(args);
				separator = ", ";
				break;
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(args);
}
