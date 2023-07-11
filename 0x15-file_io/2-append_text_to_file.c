#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: added content to file
 *
 * Return: 1 if succeeded, -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, nletters;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	nletters = 0;
	while (text_content[nletters] != '\0')
	{
		nletters = nletters + 1;
	}
	wr = write(fd, text_content, nletters);

	if (wr < 1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
