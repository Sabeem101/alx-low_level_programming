#include "main.h"

/**
 * _islower - checks if a character is in lowercase
 * @c: character to be checked
 *
 * Return: 1 if character is in lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
