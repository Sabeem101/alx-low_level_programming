#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * @Return: int count
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	return (count);
}
