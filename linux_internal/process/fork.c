#include <stdio.h>
#include <unistd.h>
int main()
{
	fork();
	fork();
	fork();
	printf("hi hello world!\n PID=%d\n",getpid());
	return 0;
}

