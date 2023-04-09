#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 and s2 are equals
 *		another number if not
 */

int _strcmp(char *s1, char *s2)
{
	int A = 0, B = 0;

	while (B == 0)
	{
		if ((*(s1 + A) == '\0') && (*(s2 + A) == '\0'))
			break;
		B = *(s1 + A) - *(s2 + A);
		A++;
	}
	return (B);
}
