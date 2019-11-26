#include "shell.h"

char *read_line(list_t *head)
{
	char *buff = NULL;
	size_t size = 0;

	write(STDOUT_FILENO, "($) ", 4);
	if (getline(&buff, &size, stdin) == EOF)
	{
		free(buff);
		free_list(head);
		write(STDOUT_FILENO, "logout\n", 7);
		exit(EXIT_FAILURE);
	}
	return (buff);
}
