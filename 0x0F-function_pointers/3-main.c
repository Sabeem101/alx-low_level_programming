#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - function main
 * @agrc: amount of arguments
 * @argv: pointer to argument
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	char *ops;
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	ops = argv[2];

	if (get_op_func(ops) == NULL || ops[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*ops == '/' && n2 == 0) ||
			(*ops == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(ops)(n1, n2));

	return (0);
}
