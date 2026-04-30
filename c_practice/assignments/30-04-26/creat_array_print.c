#include<stdio.h>
int main()
{
	int n,i;

	printf("enter the range:");
	scanf("%d",&n);

	int arr[n];

	for(i=0;i<n;i++)
	{
	     arr[i]=i+1;
	}
	printf("array elements are");

	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
