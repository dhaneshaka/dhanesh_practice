#include<stdio.h>

int main()
{

	int n,a=1,b=1;

	printf("enter the input number:");
	scanf("%d",&n);


	for(int i=1;i<=n;i++)
	{
		printf("%d ",a);
		int c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
