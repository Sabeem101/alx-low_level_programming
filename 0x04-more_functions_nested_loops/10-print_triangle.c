#include "main.h"

/**
 * print_triangle - entry point
 *
 * Description: prints diagonals
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int r, s, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = size - r; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
