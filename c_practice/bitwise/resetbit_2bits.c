#include<stdio.h>
int main()
{
	int n,m1,m2;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("enter the first reset bit position:\n");
	scanf("%d",&m1);
	printf("enter the seconf reset bit position:\n");
	scanf("%d",&m2);
	n= n&~((1<<m1)|(1<<m2));
	printf("the bits after resetting:%d\n",n);
	return 0;
}


