#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts binary number to unsigned integer
 * @b: binary number
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int un_int = 0;
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
			un_int += base_two;
		}
	}
	return (un_int);
}
