#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: pointer source
 * @dest: pointer destination
 * @n: amount of bytes from source
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int A = 0, B = 0;

	while (*(dest + A) != '\0')
	{
		A++;
	}

	while (n > B)
	{
		*(dest + A) = *(src + B);
		if (*(src + B) == '\0')
			break;
		A++;
		B++;
	}
	return (dest);
}
