#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t my_pid;
    pid_t my_ppid;

    my_pid = getpid();
    my_ppid = getppid();

    printf("children %u\n", my_pid);
    printf("parent %u\n", my_ppid);

    return (0);
}
