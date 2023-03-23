#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14.
 * 		repeated 10 times.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int t, n;

	for (t = 0; t <= 10; t++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
