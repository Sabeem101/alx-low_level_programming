#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: source pointer
 * @dest: destination pointer
 * @n: amount of bytes from the source
 *
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (*(dest + x) != '\0')
		x++;
	while (n > y)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
		y++;
	}
	return (dest);
}
