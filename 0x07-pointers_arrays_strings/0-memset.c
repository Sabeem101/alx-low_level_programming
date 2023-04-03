#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 *		pointed to by s with the constant byte b
 * @n: number on bytes to fill
 * @s: pointer to memory area
 * @b: constant value
 *
 * Return: pointer to memory value
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(s + x) = b;

	return (s);
}
