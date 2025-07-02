#include<stdio.h>
int main()
{
	int num1,num2,choice;
	float result;
	printf("enter the first number: ");
	scanf("%d",&num1);
	printf("enter the second number: ");
	scanf("%d",&num2);
	printf("addition %d\n",num1+num2);
	printf("subtraction %d\n",num1-num2);
	printf("multiplication %d\n",num1*num2);
	if (num2==0)
		printf("the number can not be divisible by zero\n");
	else
	printf("division%f\n",num1/(float)num2);
	return 0;
}



