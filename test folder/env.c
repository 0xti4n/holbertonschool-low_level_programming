#include "holberton.h"

extern char **environ;

int main(int ac, char **av)
{

    printf("%p\n", (void*)&environ);
    exit(EXIT_SUCCESS);
}
