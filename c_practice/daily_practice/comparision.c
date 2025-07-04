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
		printf("a==b true\n");
	}
	else
	{
		printf("a==b false\n");
	}
	if(a!=b)
	{
		printf("a!=b true\n");
	}
	else
	{
		printf("a!=b false\n");
	}
	if(a<b)
	{
		printf("a<b true\n");
	}
	else
	{
		printf("a<b  false\n");
	}
	if(a>b)
	{
		printf("a>b  true\n");
	}
	else
	{
		printf("a>b  false\n");
	}
	if(a<=b)
	{
		printf("a<= true\n");
	}
	else
	{
		printf("a<= false\n");
	}
	if(a>=b)
	{
		printf("a>=b  true\n");
	}
	else
	{
		printf("a>=b false\n");
	}
	return 0;
}



