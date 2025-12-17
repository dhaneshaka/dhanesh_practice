#include<stdio.h>
int fact(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}

int main()
{

int rows,d;

printf("enter the number of rows\n");
scanf("%d",&rows);

for(int i=0;i<=rows;i++)
{
	int num=1;
	for(int space =1;space<=rows-i;space++)
	{
	printf("  ");
	}
	for(int j=0;j<=i;j++)
	{
	//	printf("%4d",num);
	//	num=num*(i-j)/(j+1);
		d=fact(i)/(fact(j)*fact(i-j));
		printf("%d  ",d);

	}
	printf("\n");
}
return 0;
}


