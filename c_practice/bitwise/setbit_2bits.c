#include<stdio.h>
int main()
{
	int n,m1,m2;
	printf("enter the value if n:\n");
	scanf("%d",&n);
	printf("enter the first bit position m1 :\n");
	scanf("%d",&m1);
	printf("enter the second bit position m2:\n");
	scanf("%d",&m2);
	n=n|(1<<m1)|(1<<m2);
	printf("the bits after setting:%d\n",n);
	return 0;
}
