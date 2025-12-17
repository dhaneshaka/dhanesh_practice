#include<stdio.h>

int main()
{
	int a=10;
	int b=20;	
	int *p=&a;
	int *q=&b;

	printf("%d\n",a);
	printf("%d\n",b);
	printf("%p\n",p);
	printf("%d\n",*p);
	printf("%d\n",*q);

	return 0;
}
