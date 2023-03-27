#include "main.h"

/**
 * rev_string - prints string in reverse
 *
 * @s: string input.
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int len, str, half;
	char rev;

	for (len = 0; s[len] != '\0'; len++)
	;
	str = 0;
	half = len / 2;

	while (half--)
	{
		rev = s[len - str - 1];
		s[len - str - 1] = s[str];
		s[str] = rev;
		str++;
	}
}
