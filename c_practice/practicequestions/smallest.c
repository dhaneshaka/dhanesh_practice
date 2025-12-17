#include<stdio.h>
int main()
{
	int n,i,min;
	printf("enter the number: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=i;i<n;i++)
	{
		if (arr[i]<min)
		{
			min=arr[i];
		}}
	printf("the smallest number is %d\n",min);
	return 0;
}
