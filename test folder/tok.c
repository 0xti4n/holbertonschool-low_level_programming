#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int bytes;
    size_t size = 100;
    char *string;
    char *token;

    printf("$ ");

    string = (char *) malloc(size);
    if (string == NULL)
        return (-1);

    bytes = getline (&string, &size, stdin) -1;
    if (bytes == -1)
        return (-1);

    token = strtok(string, " ");

    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    free(string);
    return (0);
}
