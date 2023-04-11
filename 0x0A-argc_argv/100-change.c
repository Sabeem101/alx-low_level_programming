#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that prints the minimum number of coins
 *		to make change for an amount of money
 * @argc: arguments counter
 * @argv: array of arguments
 * Return: 0 at success, 1 at failure
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		if (cents > 0)
		{
			coins = _coinz_cl(cents);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);
	return (0);
}

/**
 * _coinz_cl - calculates the number of coins given as change
 * @cents: change received
 * Return: number of coins
 */
int _coinz_cl(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents % 25 >= 0)
		{
			coins += cents / 25;
			cents = cents % 25;
		}
		if (cents % 10 >= 0)
		{
			coins += cents / 10;
			cents = cents % 10;
		}
		if (cents % 5 >= 0)
		{
			coins += cents / 5;
			cents = cents % 5;
		}
		if (cents % 2 >= 0)
		{
			coins += cents / 2;
			cents = cents % 2;
		}
		if (cents % 1 >= 0)
		{
			coins += cents / 1;
			cents = cents % 1;
		}
	}
	return (coins);
}
