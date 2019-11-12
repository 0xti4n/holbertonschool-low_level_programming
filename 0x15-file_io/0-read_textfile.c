#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * read_textfile -  reads a text file and prints it to the STDOUT.
 * @filename: Text to read.
 * @letters: The number of letters.
 * Return: The number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t con, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	con = open(filename, O_RDONLY);
	if (con == -1)
	{
		free(buf);
		return (0);
	}

	rd = read(con, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		free(buf);
		return (0);
	}
	close(con);

	return (rd);
}
