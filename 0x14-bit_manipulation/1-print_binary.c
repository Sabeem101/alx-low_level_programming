#include "main.h"

/**
 * print_binary - prints binary representaion of a number
 * @n:unsigned long integer
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int num;

	num = n & 1;
	n = n >> 1;

	if (n > 0)
		print_binary(n);
	_putchar(num + '0');
}
