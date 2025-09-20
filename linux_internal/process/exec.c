#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;

    pid = fork();

    if (pid < 0)
    {
        perror("fork");
        return 1;
    }

    if (pid == 0) 
    {
        printf("Child process (PID: %d) is running ls -l\n", getpid());
        
        execlp("ls", "ls", "-l", NULL);

        perror("execlp");
        return 1;
    } else 
    {
        printf("Parent process (PID: %d) created child with PID %d\n", getpid(), pid);

        wait(NULL);

        printf("Parent process: Child has finished.\n");
    }

    return 0;
}
