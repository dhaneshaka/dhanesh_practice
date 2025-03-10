#include<stdio.h>
int main()
{
	float num1,num2,sum,average;
	printf("enter the two values:");
	scanf("%f%f",&num1,&num2);
	sum= num1 + num2;
	average= sum/2;
	printf("sum: %2f\n",sum);
	printf("average: %2f\n",average);
	return 0;
}

