#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer
 * @index: index of the bit
 *
 * Return: 1 if succeded, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
	{
		return (-1);
	}
	x = 1 << index;

	if (*n & x)
	{
		*n ^= x; 
	}
	return (1);
}
