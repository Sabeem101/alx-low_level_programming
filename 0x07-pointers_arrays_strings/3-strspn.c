#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: matches targeted
 *
 * Return: number of matching characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y;
	int m = 0;

	while (*(s + x) != '\0')
	{

		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				m++;
				break;
			}
			if (*(accept + y + 1) == '\0' && *(s + x) != *(accept + y))
				return (m);
		}
		x++;
	}
	return (m);
}
