#include<stdio.h>
int main()
{
	int n,a;
	printf("enter the value : \n");
	scanf("%d",&n);
	n |=(1<<5);
	printf("%d\n",n);
	return 0;
}
