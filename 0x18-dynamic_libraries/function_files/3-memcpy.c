#include "main.h"

/**
 * _memcpy - copies bytes from memory source to destination
 * @n: bytes to be copied
 * @src: memory source
 * @dest: memory destination
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(dest + x) = *(src + x);
	return (dest);
}
