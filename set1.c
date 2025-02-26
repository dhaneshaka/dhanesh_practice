#include<stdio.h>
int main()
{
int n,p1,p2;
printf("enter the value: \n");
scanf("%d%d%d",&n,&p1,&p2);
n|=(1<<p1)|(1<<p2);
printf("final result is %d\n",n);
	return 0;
}
