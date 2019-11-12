#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * create_file -  creates a file.
 * @filename: New file.
 * @text_content: The content to write.
 * Return: 1 if worked or -1 if a error ocurred.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i])
		i++;
	}

	wr = write(fd, text_content, i);
	if (wr == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
