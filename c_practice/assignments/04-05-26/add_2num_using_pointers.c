#include<stdio.h>
int main()
{
	int a=10,b=20;
	int sum;
	int *p=&a,*q=&b;

	sum=*p+*q;
	printf("sum=%d",sum);
	return 0;
}
