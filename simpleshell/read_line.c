#include "shell.h"

char *read_line(void)
{
    char *buff;
    size_t size = 1024;

    buff = malloc(size * sizeof(char));
        if(buff == NULL)
            return(NULL);

    write(STDOUT_FILENO, "($) ", 4);
    getline(&buff, &size, stdin);

    return (buff);
}
