#include "shell.h"

char *read_line(void)
{
	char *buff;
	size_t size = 1024;

	buff = malloc(size * sizeof(char *));
	if (buff == NULL)
	{
		return (NULL);
	}
	write(STDOUT_FILENO, "($) ", 4);
	if (getline(&buff, &size, stdin) == EOF)
	{
		write(STDOUT_FILENO, "logout\n", 7);
		exit(EXIT_FAILURE);
	}
	return (buff);
}
