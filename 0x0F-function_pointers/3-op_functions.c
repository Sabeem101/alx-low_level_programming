#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first num
 * @b: second num
 *
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers
 * @a: first num
 * @b: second num
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first num
 * @b: second num
 *
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the modulos of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
