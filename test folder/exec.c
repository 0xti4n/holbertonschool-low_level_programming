#include "holberton.h"

int main(void)
{
    pid_t child_pid[5];
    int status, i;
    char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

    for (i = 0; i < 5; i++)
    {
        child_pid[i] = fork();
        if (child_pid[i] == 0)
            break;
    }
    printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid());
    sleep(3);
    if (execve(argv[0], argv, NULL) == -1)
    {
        perror("Error:");
    }
    for (i = 0; i < 5; i++)
    wait(&status);

    return (0);
}
