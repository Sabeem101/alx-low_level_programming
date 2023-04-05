#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: string to be scanned
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
