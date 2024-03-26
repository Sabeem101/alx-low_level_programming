#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @s: pointer to the string
 *
 * Return: void
 */
void _puts(char *s)
{
	int x = 0;

	while (s[x])
	{
		_putchar(s[x]);
		x++;
	}
	_putchar('\n');
}
