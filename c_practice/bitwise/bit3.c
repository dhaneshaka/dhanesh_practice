#include<stdio.h>
int main()
{
	int n,a;
	printf("enter the value:\n");
	scanf("%d%d",&n,&a);
	n|=(1<<6);
	printf("%d\n",n);
	return 0;
}
