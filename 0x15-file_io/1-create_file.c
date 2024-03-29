#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: file content
 *
 * Return: 1 on success, -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY);
		if (fd == -1)
		{
			return (-1);
		}
		return (1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	wr = write(fd, text_content, strlen(text_content));

	if (wr == -1)
	{
		close(fd);
		return (1);
	}
	close(fd);
	return (1);
}
