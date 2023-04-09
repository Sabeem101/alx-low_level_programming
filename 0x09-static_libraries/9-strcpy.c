#include "main.h"

/**
 * _strcpy - copies string from one pointer to another.
 *		including the null bytes
 * @src: source of input string
 * @dest: string destination
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int str = -1;

	do {
		str++;
		dest[str] = src[str];
	} while (src[str] != '\0');

	return (dest);
}
