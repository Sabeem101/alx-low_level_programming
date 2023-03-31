#include "main.h"

/**
 * leet - encodes a string 1337
 * @s: string to be encoded
 *
 * Return: result
 */

char *leet(char *s)
{
	int c, d;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (s[c] == a[d])
			{
				s[c] = b[d];
			}
		}
	}
	return (s);
}
