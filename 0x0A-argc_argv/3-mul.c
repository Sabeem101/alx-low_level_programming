#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to function
 * @argv: argument vector of pointers and strings
 *
 * Return: 0, if there's an error then 1
 */

int main(int argc, char *argv[])
{
	int x, y, z;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;

	printf("%d\n", z);
	return (0);

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
}
