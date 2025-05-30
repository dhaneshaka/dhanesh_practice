#include<stdio.h>
int main()
{
	int m,n;
	printf("enter the values of  n:\n");
	scanf("%d",&n);
	printf("enter the bit position:\n");
	scanf("%d",&m);
	n=n&~(1<<m);
	printf("the bits after reset:%d\n",n);
	return 0;
}


