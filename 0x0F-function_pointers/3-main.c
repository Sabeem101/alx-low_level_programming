#include "function_pointers.h"
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
	char *opr;
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	opr = argv[2];

	if (get_op_func(opr) == NULL || opr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*opr == '/' && n2 == 0) ||
			(*opr == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opr)(n1, n2));

	return (0);
}
