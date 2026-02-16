#include<stdio.h>
#include<pthread.h>

void *print_even(void *arg)
{
	int i;

	for(i=2;i<=30;i++)
	{
		if(i % 2==0)
		{
			printf("even number:%d\n",i);
		}
	}
	return NULL;
}
int main()
{
	pthread_t tid;

	pthread_create(&tid, NULL, print_even, NULL);

	pthread_join(tid, NULL);
	return 0;
}
