#include<stdio.h>
int main()
{
	int n,num1,num2,num3,largest;
	printf("enter the three numbers :");
	scanf("%d%d%d",&num1,&num2,&num3);
	if((num1>=num2)&&(num1>=num3))
	{
		largest=num1;
	}
	else if((num2>=num1)&&(num2>=num3))
	{
		largest=num2;
	}
	else
	{
		largest=num3;
	}
	printf("largest value %d\n",largest);
	return 0;
}
		
