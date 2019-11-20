#include "shell.h"


char **parse_line(char *read, char *del)
{
  int bufsize = 64, i = 0;
  char **tokens = malloc(bufsize * sizeof(char*));
  char *token;

  if (!tokens)
  {
    perror("Error\n");
    exit(EXIT_FAILURE);
  }

  token = strtok(read, del);
  while (token != NULL)
  {
    tokens[i] = token;
    i++;

    if (i >= bufsize)
    {
      bufsize = bufsize + bufsize;
      tokens = realloc(tokens, bufsize * sizeof(char*));
      if (!tokens)
      {
        perror("Error\n");
        exit(EXIT_FAILURE);
      }
    }
    token = strtok(NULL, del);
  }
  tokens[i] = NULL;
  return tokens;
}
