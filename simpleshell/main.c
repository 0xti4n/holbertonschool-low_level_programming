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
		args = parse_line(read, del);
		child = fork();

		if (child == -1)
		{
			perror("The proccess can't be created");
		}

		if (child == 0)
		{
			execve(args[0], args, NULL);
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
