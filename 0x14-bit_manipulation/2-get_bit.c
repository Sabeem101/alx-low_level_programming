#include "main.h"

/**
 * get_bit - returns the valur of a bit at a given index
 * @n: unsigned long integer input
 * @index: index of a bit
 *
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 64)
	{
		return (0);
	}
	for (x = 0; x <= 63; n >>= 1, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}
	return (-1);
}
