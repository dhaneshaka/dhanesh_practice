#include<stdio.h>

int main()
{
	int i,n;

	printf("enter the range:");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		arr[i]=i+1;
	}

	printf("array elements:");

	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
