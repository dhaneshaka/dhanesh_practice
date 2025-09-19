#include<stdio.h>

int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);

	if((n&(n-1))==0)
	{
		printf("power of 2");
	}
	else
	{
		printf("not power of 2");
	}
}
