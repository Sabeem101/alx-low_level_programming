#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: unsigned long interger
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int x;

	x = n & 1;
	n = n >> 1;

	if (n > 0)
		print_binary(n);
	_putchar(x + '0');
}
