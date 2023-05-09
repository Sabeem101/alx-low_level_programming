#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - copies a file
 * @argc: counts arguments
 * @argv: arguments array
 *
 * Return: numbers of characters printed
 */

int main(int argc, char *argv[])
{
	int ffrom, fto, rd, wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ffrom = open(argv[1], O_RDONLY);
	if (ffrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fto = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (fto < 0)
		fto = open(argv[2], O_TRUNC | O_WRONLY);
	if (fto == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	rd = read(ffrom, buffer, 1024);
	wr = write(fto, buffer, rd);
	if (wr == -1)
	{
		exit(99);
	}
	close(ffrom);
	close(fto);
	return (rd);
}
