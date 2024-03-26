#include "main.h"

/**
 * _strpbrk - searches string fro any set of bytes
 * @s: original string
 * @accept: string containing bytes matched
 *
 * Return: pointer to the byte that matches, or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
				return (s + x);
		}
	}
	return ('\0');
}
