#include<stdio.h>
int main()
{
	int n;
	printf("enter number of numbers\n");
	scanf("%d",&n);
	if(n>0&&(n&(n-1))==0)
	{
		printf("%d is the power of 2 set bit\n");
	}
	else
	{
		printf("%d is not power of 2 set bit\n");
	}
	return 0;
}

