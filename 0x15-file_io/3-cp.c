#include <stdio.h>
#include "main.h"

/**
 * error_file - checks if files can be opened
 * @cd: code
 * @nm: name
 *
 * Return: void
 */

void error_file(int cd, char *nm)
{
	switch (cd)
	{
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", nm);
		exit(98);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", nm);
		exit(99);
		break;
	}
}

/**
 * main -copies a file
 * @argc: counts arguments
 * @argv: arguments vector
 *
 * Return: numbers of characters printed
 */

int main(int argc, char *argv[])
{
	int filef, filet;
	char buffer[1024];
	int rd = 0, wr = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n");
		exit(97);
	}
	filef = open(argv[1], O_RDONLY);
	if (filef == -1)
		error_file(98, argv[1]);

	filet = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (filet == -1)
		error_file(99, argv[2]);


	while ((rd = read(filef, buffer, 1024)))
	{
		if (rd == -1)
			error_file(98, argv[1]);
		wr = write(filet, buffer, rd);
		if (wr == -1)
			error_file(99, argv[2]);
	}
	if (close(filef) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filef);
		exit(100);
	}
	if (close(filet) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", filet);
		exit(100);
	}
	return (0);
}
