#include<stdio.h>
int main()
{
	int a[3]={5,10,15};
	int sum,i;
	 sum=0;
	for(i=0;i<3;i++)
	{
		sum=sum+a[i];
	}
	printf("%d sum",sum);
	return 0;
}
