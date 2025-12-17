#include<stdio.h>
int main()
{
	int m1,m2,n;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("enter the first toggle bit position m1:\n");
	scanf("%d",&m1);
	printf("enter the second toggle bit position m2:\n");
	scanf("%d",&m2);
	n=n^((1<<m1)^(1<<m2));
	printf("the bits after toggling:%d\n",n);
	return 0;
}
	
