#include "shell.h"

/**
 * 
 * 
 */
int main(void)
{
	char *read;
	char **args;
	pid_t child;
	char *del = " \n";
	int i;
	
	while (1)
	{
		read = read_line();
		if (read == NULL)
			break;
		args = parse_line(read, del);
		built_in_command(args);
		child = fork();

		if (child == 0)
		{
			if (execve(args[0], args, NULL) == -1)
			{
				perror("Error");
				exit(EXIT_FAILURE);
			}
		}
		else if (child == -1)
		{
			perror("FORK FAILURE\n");
		}
		else
		{
			wait(NULL);
		}
	}
	free(read);
	for (i = 0; args[i] != NULL; i++)
		free(args[i]);
	exit(EXIT_SUCCESS);
}
