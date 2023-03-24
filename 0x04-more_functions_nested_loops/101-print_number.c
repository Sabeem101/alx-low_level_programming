#include "main.h"

/**
 * print_number - prints input number
 * @n: input value to check
 * Return: void
 */

void print_number(int n)
{
	unsigned int num1, num2;
	int a;
	int x = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	num1 = n;
	num2 = num1;
	if (num1 > 9)
	{
		while (num1 >= 10)
		{
			x = x * 10;
			num1 = num1 / 10;
		}
		_putchar((num2 / x) + '0');
		x = x / 10;

		for (a = x; a >= 1; a = a / 10)
			_putchar((num2 / a) % 10 + '0');
	}
	else
		_putchar(num1 + '0');
}
