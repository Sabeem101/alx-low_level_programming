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
	int a, b = 0, c = 0;

	while (*(s + b) != '\0')
	{
		for (a = 0; *(accept + a) != '\0'; a++)
		{
			if (*(s + b) == *(accept + a))
			{
				c++;
				break;
			}
			if (*(accept + a + 1) == '\0' && *(s + b) != *(accept + a))
				return (c);
		}
		b++;
	}
	return (c);
}
