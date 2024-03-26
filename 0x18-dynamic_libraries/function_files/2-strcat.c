#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: pointer source
 * @dest: pointer destination
 *
 * Return: pointer destination
 */
char *_strcat(char *dest, char *src)
{
	int a, b = -1;

	for (a = 0; dest[a] != '\0'; a++)
		;
	do {
		b++;
		dest[a] = src[b];
		a++;
	} while (src[b] != '\0');
	return (dest);
}
