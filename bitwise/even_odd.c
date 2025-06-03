#include<stdio.h>
int main()
{
	int n;
	printf("enter the input value:\n");
	scanf("%d",&n);
	if((n&1)==0)
	{
		printf("is even number\n");
	}
	else
	{
		printf("is odd number\n");
	}
	return 0;
}


