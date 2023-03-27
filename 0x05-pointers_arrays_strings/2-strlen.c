#include "main.h"

/**
 * _strlen - checks the lenght of a string
 * @s: string to check
 *
 * @Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	return (count);
}
