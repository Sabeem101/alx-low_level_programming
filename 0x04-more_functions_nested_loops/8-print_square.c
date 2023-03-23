#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int column;
	int row;

	if (size > 0)
	{
		for (column = 0; column < size; column++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
