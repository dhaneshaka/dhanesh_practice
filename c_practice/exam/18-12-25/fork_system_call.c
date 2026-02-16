#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	pid=fork();

	if(pid<0)
	{
		printf("fork failed\n");
	}
	else if(pid==0)
	{
		printf("child process\n");
		printf("child PID=%d\n",getpid());
		printf("parent PID=%d\n",getppid());
	}
	else
	{
		printf("parent process\n");
		printf("parent PID=%d\n",getpid());
		printf("child PID=%d\n",pid);
	}
	return 0;
}
