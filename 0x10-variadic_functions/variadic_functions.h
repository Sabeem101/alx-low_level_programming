#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>

/**
 * struct prints - printer function
 * @dt: data type
 * @itprints: pointer
 */

typedef struct prints
{
	char *dt;
	void (*itprints)(va_list arg);

} prints_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
