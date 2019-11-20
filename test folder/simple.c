#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <ctype.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>


char **split_line(char *line, char *del)
{
  int bufsize = 1024, pos = 0;
  char **tokens = malloc(bufsize * sizeof(char*));
  char *token;

  if (!tokens)
  {
    perror("ls: allocation error\n");
    exit(EXIT_FAILURE);
  }

  token = strtok(line, del);
  while (token != NULL)
  {
    tokens[pos] = token;
    pos++;

    token = strtok(NULL, del);
  }
  tokens[pos] = NULL;
  return tokens;
}







int main(void)
{
    pid_t child;
    char *buff = NULL;
    char **token;
    size_t size = 1024;
    int status;

    buff = malloc(size * sizeof(char));
    if(!buff)
        return (-1);

    while (1)
    {
        printf("$ ");
        getline(&buff, &size, stdin);
        token = split_line(buff," \n");
        child = fork();
        if (child == -1)
        {
            return(1);
        }
        if (child == 0)
        {
            execve(token[0],token, NULL);
        }
        else
        {
            wait(&status);
        }
    }
    return (0);
}
