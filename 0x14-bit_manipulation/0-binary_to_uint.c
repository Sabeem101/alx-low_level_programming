#include "main.h"

/**
 * binary_to_uint - converts binary to an unsigned integer
 * @b: binary
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int un_int = 0;
	int leng, b_two;

	if (b == NULL)
	{
		return (0);
	}
	for (leng = 0; b[leng] != '\0'; leng++)
		;
	for (leng--, b_two = 1; leng >= 0; leng--, b_two *= 2)
	{
		if (b[leng] != '0' && b[leng] != '1')
		{
			return (0);
		}
		if (b[leng] & 1)
		{
			un_int += b_two;
		}
	}
	return (un_int);
}
