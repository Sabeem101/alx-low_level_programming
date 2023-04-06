#include "main.h"

/**
 * is_prime_number - prime number identifier
 * @n: number
 *
 * Return: result
 */

int is_prime_number(int n)
{
	int b = 2;

	if (n < b)
	{
		return (0);
	}
	return (prime_help(n, b));
}

/**
 * prime_help - finds prime number using recursion
 * @a: number to be tested
 * @b: helper
 *
 * Return: prime value
 */

int prime_help(int a, int b)
{
	if (a % b == 0 && a != b)
	{
		return (0);
	}
	if (a % b != 0 && b < a)
	{
		return (prime_help(a, b + 1));
	}
	return (1);
}
