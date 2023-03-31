#include "main.h"

/**
 * rot13 - encodes a  string into rot13
 * @s: string to encode
 *
 * Return: string address
 */

char *rot13(char *s)
{
	int c, d;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; a[d] != '\0'; d++)
		{
			if (s[c] == a[d])
			{
				s[c] = b[d];
				break;
			}
		}
	}
	return (s);
}
