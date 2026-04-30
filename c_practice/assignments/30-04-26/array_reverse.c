#include<stdio.h>

int main()
{
	int i,n;

	printf("enter the input range:");
	scanf("%d",&n);

	int arr[n];

	printf("enter the input elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("reversed elements are:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

