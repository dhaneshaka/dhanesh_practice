#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of 16 bit : ");
	scanf("%d",&n);
	if ((((1>>6)&1)==1)&&(((1>>11)&1)==1))
	{
		n=n^(1<<13);
	}
	else
	{
		n=n&(~(1<<6)|(1<<11));
	}
	printf("enter the value %d\n",n);
	return 0;
}


