#include<stdio.h>

int main()
{
	int n,i,sum=0;


	printf("enter the input range:\n");
	scanf("%d",&n);

	int arr[n];

	printf("enter the input elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}

	printf("the sum of numbers is=%d\n",sum);

	return 0;
}
