#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the input numbers:\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("reverse elements:\n");
	for(i = n-1; i >=0; i--)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}
