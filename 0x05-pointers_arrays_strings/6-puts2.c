#include "main.h"

/**
 * puts2 - prints every character of a string
 * 		followed by a new line.
 *
 * @str: input string.
 *
 * Return: 0
 */

void puts2(char *str)
{
	int inst = 0;

	while (str[inst] != '\0')
	{
		if (inst % 2 == 0)
		{
			_putchar(str[inst]);
		}
		inst++;
	}
	_putchar('\n');
}
