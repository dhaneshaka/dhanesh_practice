#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the input values:\n");

	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("output of the array:\n");

	for(i = 0; i < n; i++)
	{
		sum = sum + arr[i] ;
	}
	printf("%d   ",sum);
	return 0;
}
		
