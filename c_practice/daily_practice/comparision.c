#include<stdio.h>
int main()
{
	int a,b;


	printf("enter the first value of a:\n");
	scanf("%d",&a);


	printf("enter the second value of b:\n");
	scanf("%d",&b);


	printf("comparasion between a %d and b%d\n",a,b);

	if(a==b)
	{
		printf(" a==b print true\n");
	}
	else
	{
		printf(" a==b print false\n");
	}
	if(a!=b)
	{
		printf(" a!=b print true\n");
	}
	else
	{
		printf(" a!=b print false\n");
	}
	if(a<b)
	{
		printf(" a<b print true\n");
	}
	else
	{
		printf("print false");
	}
	if(a>b)
	{
		printf("printf true\n");
	}
	else
	{
		printf("print false\n");
	}
	if(a<=b)
	{
		printf("print true\n");
	}
	else
	{
		printf("print false\n");
	}
	if(a>=b)
	{
		printf("print true\n");
	}
	else
	{
		printf("print false\n");
	}
	return 0;
}



