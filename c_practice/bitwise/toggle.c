#include<stdio.h>
int main()
{
	int n,m;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("enter the bit position:\n");
	scanf("%d",&m);
	n=n^(1<<m);
	printf("the bits after setting :%d\n",n);
	return 0;
}

