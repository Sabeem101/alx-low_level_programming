#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary numbers to an unsigned integer
 * @b: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unint = 0;
	int leng, base_two;

	if (b == NULL)
	{
		return (0);
	}
	for (leng = 0; b[leng] != '\0'; leng++)
		;
	for (leng--, base_two = 1; leng >= 0; leng--, base_two *= 2)
	{
		if (b[leng] != '0' && b[leng] != '1')
		{
			return (0);
		}
		if (b[leng] & 1)
		{
			unint += base_two;
		}
	}
	return (unint);
}
