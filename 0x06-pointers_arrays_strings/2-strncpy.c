#include "main.h"

/**
 * _strncpy - copies a string
 * @src: pointer source
 * @dest: pointer destination
 * @n: amount of bytes from source
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && *(src + s); s++)
	{
		*(dest + s) = *(src + s);
	}
	for (; s < n; s++)
	{
		*(dest + s) = '\0';
	}
	return (dest);
}
