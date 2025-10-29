#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
	int fd[333];
	char msg[]="hello i am parent";
	pipe(fd);
	if(fork==0)
	{
		close(fd[0]);
		write (fd[1],"hello i am parent",strlen(msg)+1);
	}
	else
	{
		char buffer[20];
		close(fd[1]);
		read(fd[0],buffer, sizeof(buffer));
		printf("recived:%s\n",buffer);
	}
	return 0;
}

