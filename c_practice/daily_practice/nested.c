#include<stdio.h>

int main()

{
	int num;

	printf("enter the number\n");
	scanf("%d",&num);


	if(num >=5)
	{
		if(num==5)
		{
			printf("number is equal\n");
		}
		else
		{
			printf("number is graterthan 5\n");
		}
	}
	else
	{
		printf("number is less then \n");
	}
	return 0;
}
