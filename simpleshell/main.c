#include "shell.h"

/**
 * main - main function.
 * Return: exit
 */
int main(int ac, char **av, char **env)
{
	pid_t child;
	char *read, *get_path;
	char *del = " \n";
	int i, status, a = 0;
	(void) ac;

	get_path = _getenv("PATH", env);
	env = parse_line(get_path, ":");

	while (env[a])
	{
		printf("%s\n", env[a]);
		a++;
	}

	while (1)
	{
		read = read_line();
		av = parse_line(read, del);

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
	free(read);
	for (i = 0; av[i] != NULL; i++)
		free(av[i]);
	free(av);
	exit(EXIT_SUCCESS);
}
