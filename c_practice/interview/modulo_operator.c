#include<stdio.h>

int main()
{
	int i,n,sum=0;


	printf("enter the input number:");
	scanf("%d",&n);

	for(i=0;i<10;i++)
	{
		sum +=n%10;
		n/=10;
	}
	printf("%d",sum);
	return 0;
}

