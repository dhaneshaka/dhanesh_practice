#include<stdio.h>

int main()
{
	int a=20;
	int b=10;

	int *p=&a;
	int *q=&b;

	int temp=*p;
	*p=*q;
	*q=temp;

	printf("a=%d ,b=%d\n",a,b);
	return 0;
}

