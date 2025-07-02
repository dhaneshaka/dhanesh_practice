#include<stdio.h>
int main()
{
	int n,i,j,count;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the number of values\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		for(j=i + 1;j < n; j++)
		{
			if(arr[i]==arr[j])
				count++;
		}
	}
	printf("the duplicate values are %d  ",count);
	return 0;
}

