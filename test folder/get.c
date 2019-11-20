#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    int bytes;
    size_t size = 100;
    char *string;

    printf("$ ");

    string = (char *) malloc(size);
    if (string == NULL)
        return (-1);

    bytes = getline (&string, &size, stdin) -1;
    if (bytes == -1)
        return (-1);

    else
    {
        printf("%s\n", string);
        //printf("The size is: %d\n", bytes);
    }
    free(string);
    return(bytes);
}
