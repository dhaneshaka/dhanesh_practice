#include<stdio.h>
int main()
{
	int n,i,j,count;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the number of values\n");
	for(i = 0; i < n; i++)
	scanf("%d",&arr[i]);
	for(i = 0; i < n; i++)
	{	count=0;
	
		for(j = i+1; j < n; j++)
		{
			if(arr[i]==arr[j])
				count++;
		}
	
	if (count==0)
		printf("unique elements %d\n ",arr[i]);
	}
	return 0;
}
