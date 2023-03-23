#include "main.h"

/**
 * print_line - prints a line in the terminal.
 * followed by a new line.
 * @n: input integer
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
