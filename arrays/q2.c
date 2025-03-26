#include<stdio.h>
int main ()
{
	int i,n,a[20];
	printf("input of the number of an elements in array : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("elements of %d : ",i);
		scanf("%d",&a[i]);
	}
	printf("value stored in an array :\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("the values stored in an array in reverse :\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
