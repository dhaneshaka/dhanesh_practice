#include<stdio.h>
int main()
{
	int m1,m2,m3,n;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("enter the first toggle bit position m1:\n");
	scanf("%d",&m1);
	printf("enter the second toggle bit position m2:\n");
	scanf("%d",&m2);
	printf("enter the third toggle bit position m3:\n");
	scanf("%d",&m3);
	n=((1<<m1)^(1<<m2)^(1<<m3));
	printf("the bits after toggle:%d\n",n);
	return 0;
}
