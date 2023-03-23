#include "main.h"

/**
 * print_diagonal - diagonal lines made of backlashes
 * @n: number of '\' to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int e = 0, d;

	if (n > 0)
	{
		for (; e < n; e++)
		{
			for (d = 0; d < e; d++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
