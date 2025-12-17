#include<stdio.h>
int main ()
{
	int num;
	printf("enter the number 16 bit number : ");
	scanf("%d",&num);
	if ((((num>>5)&1)==1) &&(((num>>10)&1)==1))
	{
		num=num^(1<<12);
	}
	else
	{
		num=num&(~((1<<5)|(1<<10)));
	}
	printf("%d",num);
		return 0 ;
}

