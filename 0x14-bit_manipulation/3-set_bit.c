#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: index of a bit
 *
 * Return: 1 if succeded, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
	{
		return (-1);
	}
	x = 1 << index;
	*n = (*n | x);

	return (1);
}
