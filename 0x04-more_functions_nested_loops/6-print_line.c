#include "main.h"

/**
 * print_line - draws a line in the terminal.
 * 		followed by a new line.
 * @n: input integer
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
