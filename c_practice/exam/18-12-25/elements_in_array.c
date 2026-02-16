#include<stdio.h>

int main()
{
	int arr[]={5,10,10,25};
	int sum=0;
	int i;

	for(i=0;i<4;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum=%d\n",sum);
	return 0;
}
