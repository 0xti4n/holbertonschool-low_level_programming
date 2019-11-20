#include "holberton.h"


char *_getenv(char *name, char **env)
{
    int i = 0;
    char *token;

    while(env[i])
    {
         token = strtok(env[i], "=" );

        if(strcmp(token, name) == 0)
        {
            token = strtok(NULL, "=" );
            return (token);
        }
        i++;
    }
    if (name == NULL)
        perror("NOT FOUND");
    return(NULL);
}

int main(int ac, char **av, char **env)
{
    char *get;

    get = _getenv("", env);
    printf("%s\n", get);
    return (0);
}
