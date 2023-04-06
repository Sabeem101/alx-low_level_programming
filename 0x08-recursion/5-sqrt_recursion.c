#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number used
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	return (sqrt_finder(n, 1));
}

/**
 * sqrt_finder - recursive square root of a number
 * @x: test number
 * @r: root
 *
 * Return: result
 */

int sqrt_finder(int x, int r)
{
	int sqr = r * r;

	if (sqr > x)
	{
		return (-1);
	}
	if (sqr == x)
	{
		return (r);
	}
	return (sqrt_finder(x, r + 1));
}
