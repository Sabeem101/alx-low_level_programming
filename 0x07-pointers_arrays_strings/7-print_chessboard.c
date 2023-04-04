#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: 2D array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int vrow, hrow;

	for (vrow = 0; vrow < 8; vrow++)
	{
		for (hrow = 0; hrow < 8; hrow++)
		{
			_putchar(a[vrow][hrow]);
		}
		_putchar('\n');
	}
}
