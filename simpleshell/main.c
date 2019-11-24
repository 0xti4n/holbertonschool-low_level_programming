#include "shell.h"

/**
 * main - main function.
 * Return: exit
 */
int main(__attribute__((unused))int ac, char **av, char **env)
{
	pid_t child;
	char *read, *get_path, *del = " \n";
	char **paths;
	int i, status;
	list_t *head;

	head = NULL;
	get_path = _getenv("PATH", env);
	paths = parse_line(get_path, ":");
	list_creator(paths, &head);
	
	while (1)
	{
		read = read_line();
		av = parse_line(read, del);
		built_in_command(av, env);
		av[0] = concatenate_list(&head, av[0]);
		
		child = fork();
		if (child == 0)
		{
				if (av[0] && execve(av[0], av, NULL) == -1)
				{
					perror("Error");
				}
				exit(EXIT_FAILURE);
		}
		else if (child == -1)
		{
			perror("FORK FAILURE\n");
		}
		else
		{
			wait(&status);
		}
	}
	for (i = 0; av[i] != NULL; i++)
			free(av[i]);
		free(av);
	free(read);
	exit(EXIT_SUCCESS);
}
