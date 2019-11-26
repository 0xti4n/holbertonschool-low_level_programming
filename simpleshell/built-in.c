#include "shell.h"

/**
 *
 *
 */
void built_in_command(char **av, char **env, char *read, list_t *head)
{
	unsigned int i = 0;

	if (av[0] != NULL)
	{
		if ((_strcmp(av[0], "env")) == 0)
		{
			while (env[i] != NULL)
			{
				write(STDOUT_FILENO, env[i], _strlen((env[i])));
				write(STDOUT_FILENO, "\n", 1);
				i++;
			}
		}
		if ((_strcmp(av[0], "exit")) == 0)
			{
				free(read);
				free_list(head);
				exit(EXIT_SUCCESS);
			}
	}
}
