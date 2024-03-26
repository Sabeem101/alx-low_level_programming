#include "main.h"

/**
 * _strncpy - copies a string
 * @src: source pointer
 * @dest: destination pointer
 * @n: amount of bytes from source
 *
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && *(src + x); x++)
	{
		*(dest + x) = *(src + x);
	}
	for (; x < n; x++)
	{
		*(dest + x) = '\0';
	}
	return (dest);
}
