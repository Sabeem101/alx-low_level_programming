#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of own main function
 * @argc: counts arguments
 * @argv: arguments entered to the program
 *
 * Return: opcode hex num
 */

int main(int argc, char *argv[])
{
	int b, x = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (x < b)
	{
		printf("%02hhx", *((char *)(main + x)));
		if (b > x + 1)
			printf(" ");
		x++;
	}
	printf("\n");
	return (0);
}
