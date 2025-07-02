#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	printf("enter the input of an array :\n");
	for(i=0;i<10;i++)
	{
		printf("%d :",i);
		scanf("%d",&arr[i]);
	}
	printf("elements in an array are :\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;

}

