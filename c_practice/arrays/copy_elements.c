#include<stdio.h>
int main ()
{
	int n,i;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	int arr[n],brr[n];
	printf("enter the input values :\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		brr[i]=arr[i];
	}
	printf("elements in an arry:\n");
	for(i = 0; i < n; i++)
	{
		printf("%d  ",brr[i]);
	}
	return 0;
}

