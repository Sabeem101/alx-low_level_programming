#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 *		the POSIX standard output
 * @filename: file name
 * @letters: number of letters to be printed
 *
 * Return: number of letters printed, 0 if failed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	char *buff;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(*buff) * letters);

	if (buff == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(fd);

	return (wr);
}
