#include "holberton.h"

void handle_signal(void)
{
    printf("$ ");
    fflush(stdout);
}

void call_exceve(char *arg)
{
	int i;
	printf("arg is %s\n", arg);

    if(fork() == 0)
    {
		/* i = execve(arg, arg, my_envp); */
		printf("errno is %d\n", errno);

        if(i < 0)
        {
			printf("%s: %s\n", arg, "command not found");
			exit(1);
		}
	}
    else
    {
		wait(NULL);
	}
}


void remove_endfile(char *line)
{
    int i = 0;

    while(line[i] != '\n')
    {
        line[i] = '\0';
        i++;
    }
}


int proccess_line(char *arg, char *line)
{
    int i = 0;

    arg = strtok(line, DEL);

    if (arg == NULL)
        return (-1);

    while(arg!= NULL)
    {
        arg = strtok(NULL, DEL);
        i++;
    }
    return (0);
}


void read_line(char *line)
{
    size_t maxchar[MAX_CHAR];
    char *str = getline(&line, maxchar, stdin);
    remove_endfile(line);

    if (((strcmp(line, "exit")) == 0 || (str == NULL)))
        exit (0);
}


int read_perse_line(char *arg, char *line)
{
    read_line(line);
    proccess_line(arg, line);

    return (0);
}

int main(void)
{
    char *arg[MAX_WORD];
    char *line[MAX_WORD];
    pid_t child;

    signal(SIGINT, SIG_IGN);
    signal(SIGINT, handle_signal);


    while (read_perse_line(arg, line))
    {
        child = fork();

        if (child == 0)
        {
            call_execve(arg);
        }
        else
        {
            wait(NULL);
        }
    }
    return (0);
}
