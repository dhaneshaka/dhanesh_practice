#include<stdio.h>
int main()
{
	int num;
	long long factorial=1;
	printf("enter the number: ");
	scanf("%d",&num);
	if(num<0)
	{
		printf("factorial is not define for negitive\n");
	}
	else
	{
		int i=num;
		while(i>0)
		{
			factorial *=i;
			i--;
		}
		printf("factorial of %d is:%llu\n",num,factorial);
	}
	return 0;
}
	
