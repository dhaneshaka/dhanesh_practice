#include<stdio.h>

int main()

{
	int n;
	printf("enter number\n");
	scanf("%d",&n);

	if((((n>>3))&1)==1)
	{
		printf("is set\n");
	}
	else
	{
		printf("not set\n");
	}
	return 0;
}

