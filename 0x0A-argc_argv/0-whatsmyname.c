#include <stdio.h>

/**
 * main - prints the name of the program
 * @agrc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */

int main (int arg __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
