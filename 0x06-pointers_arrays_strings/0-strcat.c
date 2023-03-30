#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: pointer source
 * @dest: pointer destination
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int c = -1;

	for (a = 0; dest[a] != '\0'; a++)
	;

	do {
		c++;
		dest[a] = src[c];
		a++;
	} while (src[c] != '\0');

	return (dest);
}
