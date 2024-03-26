#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: string to scan
 *
 * Return: pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	while (*(s + x) != '\0' && *(s + x) != c)
		x++;
	if (*(s + x) == c)
		return (s + x);
	else
		return (0);
}
