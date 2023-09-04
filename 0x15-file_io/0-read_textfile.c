#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 *		the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters to be printed
 *
 * Return: number of letters to be printed or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	char *buffer;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(*buffer) * letters);

	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(fd);

	return (wr);
}
